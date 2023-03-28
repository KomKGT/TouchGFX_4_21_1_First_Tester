#include <gui/screen1_screen/Screen1View.hpp>

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
void Screen1View::v_increase_v()
{
	counter++;
	Unicode::snprintf(counterTextBuffer, COUNTERTEXT_SIZE, "%02d",counter);
	counterText.invalidate();
}
void Screen1View::v_decrease_v()
{
	counter--;
	Unicode::snprintf(counterTextBuffer, COUNTERTEXT_SIZE, "%02d",counter);
	counterText.invalidate();
}
