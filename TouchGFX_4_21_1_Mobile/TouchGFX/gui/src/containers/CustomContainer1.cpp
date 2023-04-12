#include <gui/containers/CustomContainer1.hpp>

#include <BitmapDatabase.hpp>
CustomContainer1::CustomContainer1()
{

}

void CustomContainer1::initialize()
{
    CustomContainer1Base::initialize();
}
void CustomContainer1::setListElement(int item)
{
	switch(item)
	{
	case 0:
				image1.setBitmap(Bitmap(BITMAP_FACETIME_ID));
				image1.invalidate();
				break;
			case 1:
				image1.setBitmap(Bitmap(BITMAP_CALCULATOR_ID));
				image1.invalidate();
				break;
			case 2:
				image1.setBitmap(Bitmap(BITMAP_CAMERA_ID));
				image1.invalidate();
				break;
			case 3:
				image1.setBitmap(Bitmap(BITMAP_FILE_ID));
				image1.invalidate();
				break;
			case 4:
				image1.setBitmap(Bitmap(BITMAP_APP_STORE_64X64_2365235_ID));
				image1.invalidate();
				break;
			case 5:
				image1.setBitmap(Bitmap(BITMAP_APPLE_TV_64X64_1575940_ID));
				image1.invalidate();
				break;
			case 6:
				image1.setBitmap(Bitmap(BITMAP_CALENDAR_ID));
				image1.invalidate();
				break;
			case 7:
				image1.setBitmap(Bitmap(BITMAP_MESSAGE_ID));
				image1.invalidate();
				break;
			case 8:
				image1.setBitmap(Bitmap(BITMAP_SETTING_ID));
				image1.invalidate();
				break;
			default:
				break;
	}
	image1.invalidate();

}
