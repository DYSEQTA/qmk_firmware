#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x2260
#define DEVICE_VER      0x0001
#define MANUFACTURER    KBDFans
#define PRODUCT         DZ60
#define DESCRIPTION     DZ60 Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { D0, D1, D2, D3, D5 }
#define MATRIX_COL_PINS { F0, F1, E6, C7, C6, B7, D4, B1, B0, B5, B4, D7, D6, B3, F4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* RGB Congfig */
#define RGB_DI_PIN E2
#ifdef RGB_DI_PIN
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_SLEEP
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 1
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

/* Bootmagic Lite - Hold ESC when plugging in cable to enter DFU bootloader */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* Disable Unnecessary Features */
#define NO_DEBUG
#define NO_PRINT
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
