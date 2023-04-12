#include <gui/screen1_screen/Screen1View.hpp>

#include <BitmapDatabase.hpp>
Screen1View::Screen1View():scrollList1_ItemSelectCallback(this,&Screen1View::scrollList1_ItemSelectedHandler)

{

}

void Screen1View::setupScreen()
{
	scrollWheel1_1.setItemSelectedCallback(scrollList1_ItemSelectCallback);
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}
void Screen1View::scrollList1_ItemSelectedHandler(int16_t itemSelected)
{

}
