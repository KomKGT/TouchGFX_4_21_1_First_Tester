#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

Screen1Presenter::Screen1Presenter(Screen1View& v)
    : view(v)
{

}

void Screen1Presenter::activate()
{

}

void Screen1Presenter::deactivate()
{

}
void Screen1Presenter::setHour(int16_t setHour)
{
	model->setHour(setHour);
}
void Screen1Presenter::setMinute(int16_t setMinute)
{
	model->setMinute(setMinute);
}
int16_t Screen1Presenter::getHour()
{
	return model->getHour();
}
int16_t Screen1Presenter::getMinute()
{
	return model->getMinute();
}
