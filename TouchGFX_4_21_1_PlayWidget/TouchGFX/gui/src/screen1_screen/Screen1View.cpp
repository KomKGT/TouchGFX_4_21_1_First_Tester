#include <gui/screen1_screen/Screen1View.hpp>
#include "stm32f4xx_hal.h"
extern "C"
{
	extern RTC_HandleTypeDef hrtc;
	extern RTC_TimeTypeDef RTC_Time;
	extern RTC_DateTypeDef RTC_Date;
}
Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}
void Screen1View::updateTime(uint8_t hour,uint8_t min,uint8_t sec)
{
	digitalClock1.setTime24Hour(hour, min, sec);
}
void Screen1View::setTime()
{

	  /* USER CODE BEGIN RTC_Init 2 */
	  RTC_Time.Hours = 0x20;
	  RTC_Time.Minutes = 0x30;
	  RTC_Time.Seconds = 0x40;
	  RTC_Time.DayLightSaving = RTC_DAYLIGHTSAVING_NONE;
	  RTC_Time.StoreOperation = RTC_STOREOPERATION_RESET;

	  RTC_Date.WeekDay = RTC_WEEKDAY_TUESDAY;
	  RTC_Date.Month = RTC_MONTH_APRIL;
	  RTC_Date.Date = 0x04;
	  RTC_Date.Year = 0x22;

	  HAL_RTC_SetTime(&hrtc, &RTC_Time,RTC_FORMAT_BCD);
	  HAL_RTC_SetDate(&hrtc, &RTC_Date, RTC_FORMAT_BCD);

	  //application().gotoScreen2ScreenSlideTransitionWest();

}
