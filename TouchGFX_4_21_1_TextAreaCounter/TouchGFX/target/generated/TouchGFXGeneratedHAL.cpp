/**
  ******************************************************************************
  * File Name          : TouchGFXGeneratedHAL.cpp
  ******************************************************************************
  * This file is generated by TouchGFX Generator 4.21.0. Please, do not edit!
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#include <TouchGFXGeneratedHAL.hpp>
#include <touchgfx/hal/OSWrappers.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/hal/GPIO.hpp>

#include <touchgfx/widgets/canvas/CWRVectorRenderer.hpp>

namespace touchgfx
{
VectorRenderer* VectorRenderer::getInstance()
{
    static CWRVectorRendererRGB565 renderer;

    return &renderer;
}
} // namespace touchgfx

#include "stm32f4xx.h"
#include "stm32f4xx_hal_ltdc.h"

using namespace touchgfx;

namespace
{
// Use the section "TouchGFX_Framebuffer" in the linker script to specify the placement of the buffer
LOCATION_PRAGMA_NOLOAD("TouchGFX_Framebuffer")
uint32_t frameBuf[(240 * 320 * 2 + 3) / 4 * 2] LOCATION_ATTRIBUTE_NOLOAD("TouchGFX_Framebuffer");
static volatile bool refreshRequested = false;
static uint16_t lcd_int_active_line;
static uint16_t lcd_int_porch_line;
}

void TouchGFXGeneratedHAL::initialize()
{
    HAL::initialize();
    registerEventListener(*(Application::getInstance()));
    setFrameBufferStartAddresses((void*)frameBuf, (void*)(frameBuf + sizeof(frameBuf) / (sizeof(uint32_t) * 2)), (void*)0);
}

void TouchGFXGeneratedHAL::configureInterrupts()
{
    NVIC_SetPriority(DMA2D_IRQn, 9);
    NVIC_SetPriority(LTDC_IRQn, 9);
}

void TouchGFXGeneratedHAL::enableInterrupts()
{
    NVIC_EnableIRQ(DMA2D_IRQn);
    NVIC_EnableIRQ(LTDC_IRQn);
}

void TouchGFXGeneratedHAL::disableInterrupts()
{
    NVIC_DisableIRQ(DMA2D_IRQn);
    NVIC_DisableIRQ(LTDC_IRQn);
}

void TouchGFXGeneratedHAL::enableLCDControllerInterrupt()
{
    lcd_int_active_line = (LTDC->BPCR & 0x7FF) - 1;
    lcd_int_porch_line = (LTDC->AWCR & 0x7FF) - 1;

    /* Sets the Line Interrupt position */
    LTDC->LIPCR = lcd_int_active_line;
    /* Line Interrupt Enable            */
    LTDC->IER |= LTDC_IER_LIE;
}

bool TouchGFXGeneratedHAL::beginFrame()
{
    return HAL::beginFrame();
}

void TouchGFXGeneratedHAL::endFrame()
{
    if (frameBufferUpdatedThisFrame)
    {
        refreshRequested = true;
    }
    HAL::endFrame();
}

uint16_t* TouchGFXGeneratedHAL::getTFTFrameBuffer() const
{
    return (uint16_t*)LTDC_Layer1->CFBAR;
}

void TouchGFXGeneratedHAL::setTFTFrameBuffer(uint16_t* adr)
{
    LTDC_Layer1->CFBAR = (uint32_t)adr;

    /* Reload immediate */
    LTDC->SRCR = (uint32_t)LTDC_SRCR_IMR;
}

void TouchGFXGeneratedHAL::flushFrameBuffer(const touchgfx::Rect& rect)
{
    HAL::flushFrameBuffer(rect);
}

bool TouchGFXGeneratedHAL::blockCopy(void* RESTRICT dest, const void* RESTRICT src, uint32_t numBytes)
{
    return HAL::blockCopy(dest, src, numBytes);
}

extern "C"
{
    void HAL_LTDC_LineEventCallback(LTDC_HandleTypeDef* hltdc)
    {
        if (!HAL::getInstance())
        {
            return;
        }

        if (LTDC->LIPCR == lcd_int_active_line)
        {
            //entering active area
            HAL_LTDC_ProgramLineEvent(hltdc, lcd_int_porch_line);
            HAL::getInstance()->vSync();
            OSWrappers::signalVSync();

            // Swap frame buffers immediately instead of waiting for the task to be scheduled in.
            // Note: task will also swap when it wakes up, but that operation is guarded and will not have
            // any effect if already swapped.
            HAL::getInstance()->swapFrameBuffers();
            GPIO::set(GPIO::VSYNC_FREQ);
        }
        else
        {
            //exiting active area
            HAL_LTDC_ProgramLineEvent(hltdc, lcd_int_active_line);

            // Signal to the framework that display update has finished.
            HAL::getInstance()->frontPorchEntered();
            GPIO::clear(GPIO::VSYNC_FREQ);
        }
    }
}
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
