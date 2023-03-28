#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/utils.hpp>
Screen1View::Screen1View()
{
	this->hour = 0;
	this->minute = 0;
	tickCount = 0;
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
    hour = presenter->getHour();
    minute = presenter->getMinute();
    Unicode::snprintf(textClockBuffer1,TEXTCLOCKBUFFER1_SIZE,"%02d",hour);
    Unicode::snprintf(textClockBuffer2, TEXTCLOCKBUFFER2_SIZE, "%02d",minute);
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
    presenter->setHour(hour);
    presenter->setMinute(minute);
}
void Screen1View::handleTickEvent()
{
	if(tickCount == 3600) // 1 s = 60 fps => 1 min = 3600 fps
	{
		minute++;
		hour = (hour + (minute/60)) % 24;
		minute %= 60;
		Unicode::snprintf(textClockBuffer1,TEXTCLOCKBUFFER1_SIZE,"%02d",hour);
		Unicode::snprintf(textClockBuffer2, TEXTCLOCKBUFFER2_SIZE, "%02d",minute);
		textClock.invalidate();
		tickCount = 0;
	}

	tickCount++;

	//touchgfx_printf("1");
}
