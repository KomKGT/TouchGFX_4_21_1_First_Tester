/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/CustomContainer1Base.hpp>
#include <images/BitmapDatabase.hpp>

CustomContainer1Base::CustomContainer1Base()
{
    setWidth(240);
    setHeight(74);
    buttonWithIcon1.setXY(0, 13);
    buttonWithIcon1.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_PRESSED_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_DONE_50_50_E8F6FB_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_DONE_50_50_E8F6FB_SVG_ID));
    buttonWithIcon1.setIconXY(97, 0);
    add(buttonWithIcon1);
}

CustomContainer1Base::~CustomContainer1Base()
{

}

void CustomContainer1Base::initialize()
{

}
