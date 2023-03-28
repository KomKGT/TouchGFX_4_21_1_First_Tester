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
void Screen2Presenter::setHour(int16_t setHour)
{
	model->setHour(setHour);
}
void Screen2Presenter::setMinute(int16_t setMinute)
{
	model->setMinute(setMinute);
}
int16_t Screen2Presenter::getHour()
{
	return model->getHour();
}
int16_t Screen2Presenter::getMinute()
{
	return model->getMinute();
}
