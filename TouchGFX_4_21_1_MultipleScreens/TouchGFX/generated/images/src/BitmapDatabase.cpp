// 4.21.1 0xb6cd0bea
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_normal[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_NORMAL_ID = 0, Size: 100x36 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_pressed[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_PRESSED_ID = 1, Size: 100x36 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_action[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_ACTION_ID = 2, Size: 110x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_active[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_ACTIVE_ID = 3, Size: 110x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_pressed[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_PRESSED_ID = 4, Size: 110x50 pixels
extern const unsigned char image_clay_theme_images_widgets_button_icon_rounded_micro_fill_action[]; // BITMAP_CLAY_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_ACTION_ID = 5, Size: 104x92 pixels
extern const unsigned char image_clay_theme_images_widgets_button_icon_rounded_micro_fill_pressed[]; // BITMAP_CLAY_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_PRESSED_ID = 6, Size: 104x92 pixels
extern const unsigned char image_light_theme_images_backgrounds_240x320_dusty_dark[]; // BITMAP_LIGHT_THEME_IMAGES_BACKGROUNDS_240X320_DUSTY_DARK_ID = 7, Size: 240x320 pixels
extern const unsigned char image_light_theme_images_backgrounds_240x320_pink_shine[]; // BITMAP_LIGHT_THEME_IMAGES_BACKGROUNDS_240X320_PINK_SHINE_ID = 8, Size: 240x320 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_normal, 0, 100, 36, 12, 1, 76, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_36_tiny_round_pressed, 0, 100, 36, 12, 1, 76, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_action, 0, 110, 50, 13, 3, 84, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 44, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_active, 0, 110, 50, 13, 3, 84, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 44, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_button_regular_height_50_tiny_round_pressed, 0, 110, 50, 13, 3, 84, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 44, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_clay_theme_images_widgets_button_icon_rounded_micro_fill_action, 0, 104, 92, 40, 33, 24, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 26, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_clay_theme_images_widgets_button_icon_rounded_micro_fill_pressed, 0, 104, 92, 40, 33, 24, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 26, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_light_theme_images_backgrounds_240x320_dusty_dark, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_light_theme_images_backgrounds_240x320_pink_shine, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
