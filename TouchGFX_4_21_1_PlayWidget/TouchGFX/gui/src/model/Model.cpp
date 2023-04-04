#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "stm32f4xx_hal.h"
extern "C"
{
	extern RTC_HandleTypeDef hrtc;
	extern RTC_TimeTypeDef RTC_Time;
	extern RTC_DateTypeDef RTC_Date;
}
Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	HAL_RTC_GetTime(&hrtc, &RTC_Time, FORMAT_BIN);
	HAL_RTC_GetDate(&hrtc, &RTC_Date, FORMAT_BIN);
	modelListener->updateTime(RTC_Time.Hours,RTC_Time.Minutes,RTC_Time.Seconds);
}
