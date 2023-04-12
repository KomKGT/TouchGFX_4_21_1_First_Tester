#include <gui/screen1_screen/Screen1View.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>
Screen1View::Screen1View():
scrollList1_ItemSelectedCallback(this,&Screen1View::scrollList1_ItemSelectedHandler)
{

}

void Screen1View::setupScreen()
{
	scrollList1.setItemSelectedCallback(scrollList1_ItemSelectedCallback);
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}
//void Screen1View::scrollList1Updateitem(CustomContainer1& item,int16_t itemIndex)
//{
//	item.setListElements(itemIndex);
//}
void Screen1View::scrollList1_ItemSelectedHandler(int16_t itemSelected)
{
	switch(itemSelected)
		{
		case 0:
			application().gotoScreen2ScreenSlideTransitionEast();
			break;
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 7:

			break;
		case 8:

			break;
		case 9:

			break;
		case 10:

			break;
		default:
			break;
		}
}
