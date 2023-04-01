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
void Screen1View::uart_Data(char *data)
{
	//textArea1.setWideTextAction(touchgfx::WIDE_TEXT_WORDWRAP);
	Unicode::strncpy(textArea1Buffer, "KKK", TEXTAREA1_SIZE);
	textArea1.invalidate();
}
void Screen1View::setText(char *data)
{
	Unicode::strncpy(textArea1Buffer, data, TEXTAREA1_SIZE);
	textArea1.invalidate();
}
void Screen1View::setInt(int data)
{
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", data);
	textArea1.invalidate();
}
