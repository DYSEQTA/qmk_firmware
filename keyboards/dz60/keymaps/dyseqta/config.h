#pragma once

#include "config_common.h"

/* RGB Congfig */
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 1
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

/* Bootmagic Lite - Hold ESC when plugging in cable to enter DFU bootloader */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* Disable Unnecessary Features */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
