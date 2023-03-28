#include <gui/screen2_screen/Screen2View.hpp>

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
    hour = presenter->getHour();
    minute = presenter->getMinute();
    Unicode::snprintf(textClockSettingBuffer1,TEXTCLOCKSETTINGBUFFER1_SIZE,"%02d",hour);
    Unicode::snprintf(textClockSettingBuffer2,TEXTCLOCKSETTINGBUFFER2_SIZE,"%02d",minute);
    textClockSetting.invalidate();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}
void Screen2View::v_HourIncrease_v()
{
        // Override and implement this function in Screen2
	hour = (hour + 1)%24;
	Unicode::snprintf(textClockSettingBuffer1,TEXTCLOCKSETTINGBUFFER1_SIZE,"%02d",hour);
	textClockSetting.invalidate();

}
void Screen2View::v_HourDecrease_v()
{
        // Override and implement this function in Screen2
	hour = (hour - 1)%24;
	Unicode::snprintf(textClockSettingBuffer1,TEXTCLOCKSETTINGBUFFER1_SIZE,"%02d",hour);
	textClockSetting.invalidate();
}
void Screen2View::v_MinIncrease_v()
{
        // Override and implement this function in Screen2
	minute = (minute + 1)%60;
	Unicode::snprintf(textClockSettingBuffer2,TEXTCLOCKSETTINGBUFFER2_SIZE,"%02d",minute);
	textClockSetting.invalidate();
}
void Screen2View::v_MinDecrease_v()
{
        // Override and implement this function in Screen2
	minute = (minute - 1)%60;
	Unicode::snprintf(textClockSettingBuffer2,TEXTCLOCKSETTINGBUFFER2_SIZE,"%02d",minute);
	textClockSetting.invalidate();
}
void Screen2View::v_SaveBTN_v()
{
        // Override and implement this function in Screen2
	presenter->setHour(hour);
	presenter->setMinute(minute);
}
