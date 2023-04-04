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
void Screen1View::setText(char* data)
{
	Unicode::strncpy(textArea1Buffer, data, TEXTAREA1_SIZE);//char
	//Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d",data);//num
	textArea1.invalidate();
}
