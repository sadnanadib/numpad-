#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    Jan lunge
#define PRODUCT         3by2

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { B3, B1, F7, F6, F5, F4 }
#define MATRIX_COL_PINS { B6, C6, D4, D0, D1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define ENCODERS_PAD_A { E6 }
#define ENCODERS_PAD_B { B4 }
#define ENCODER_RESOLUTION 2
