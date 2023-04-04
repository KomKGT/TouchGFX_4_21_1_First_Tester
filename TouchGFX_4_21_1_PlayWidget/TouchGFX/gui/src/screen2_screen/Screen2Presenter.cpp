#include <gui/screen2_screen/Screen2View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>

Screen2Presenter::Screen2Presenter(Screen2View& v)
    : view(v)
{

}

void Screen2Presenter::activate()
{

}

void Screen2Presenter::deactivate()
{

}
void Screen2Presenter::updateTime(uint8_t hour,uint8_t min,uint8_t sec)
{
	view.updateTime(hour, min, sec);
}

