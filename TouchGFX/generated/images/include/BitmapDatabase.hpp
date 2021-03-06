// Generated by imageconverter. Please, do not edit!

#ifndef TOUCHGFX_BITMAPDATABASE_HPP
#define TOUCHGFX_BITMAPDATABASE_HPP

#include <touchgfx/hal/Types.hpp>
#include <touchgfx/Bitmap.hpp>

const uint16_t BITMAP_BACKGROUND_ID = 0;
const uint16_t BITMAP_BLANK_WATCH_BACKGROUND_ID = 1;
const uint16_t BITMAP_HUM_PRESS_NEEDLE_ID = 2;
const uint16_t BITMAP_HUM_PRESS_NEEDLE_CENTER_ID = 3;
const uint16_t BITMAP_TGFX_LOGO_WHITE_ID = 4;
const uint16_t BITMAP_WATCH_HOURS_ID = 5;
const uint16_t BITMAP_WATCH_MINUTES_ID = 6;
const uint16_t BITMAP_WATCH_NEEDLE_CENTER_ID = 7;
const uint16_t BITMAP_WATCH_SECONDS_ID = 8;

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance();
uint16_t getInstanceSize();
} // namespace BitmapDatabase

#endif // TOUCHGFX_BITMAPDATABASE_HPP
