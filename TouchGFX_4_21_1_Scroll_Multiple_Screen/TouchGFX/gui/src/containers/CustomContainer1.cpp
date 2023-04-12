#include <gui/containers/CustomContainer1.hpp>

#include <images/BitmapDatabase.hpp>
CustomContainer1::CustomContainer1()
{

}

void CustomContainer1::initialize()
{
    CustomContainer1Base::initialize();
}
void CustomContainer1::setListElements(int item)
{
	switch(item)
		{
		case 0:
			image1.setBitmap(Bitmap(BITMAP_ALERT_ID));
			image1.invalidate();
			break;
		case 1:
			image1.setBitmap(Bitmap(BITMAP_CALENDAR_ID));
			image1.invalidate();
			break;
		case 2:
			image1.setBitmap(Bitmap(BITMAP_EMAIL_ID));
			image1.invalidate();
			break;
		case 3:
			image1.setBitmap(Bitmap(BITMAP_HOME_ID));
			image1.invalidate();
			break;
		case 4:
			image1.setBitmap(Bitmap(BITMAP_INBOX_ID));
			image1.invalidate();
			break;
		case 5:
			image1.setBitmap(Bitmap(BITMAP_MAP_ID));
			image1.invalidate();
			break;
		case 6:
			image1.setBitmap(Bitmap(BITMAP_MOVIE_ID));
			image1.invalidate();
			break;
		case 7:
			image1.setBitmap(Bitmap(BITMAP_NEWS_ID));
			image1.invalidate();
			break;
		case 8:
			image1.setBitmap(Bitmap(BITMAP_SOUND_ID));
			image1.invalidate();
			break;
		case 9:
			image1.setBitmap(Bitmap(BITMAP_TOOLS_ID));
			image1.invalidate();
			break;
		case 10:
			image1.setBitmap(Bitmap(BITMAP_USER_ID));
			image1.invalidate();
			break;
		default:
			break;
		}
		image1.invalidate();

}

