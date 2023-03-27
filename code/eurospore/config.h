#pragma once

#define MANUFACTURER    "OnePressAesthetic"
#define PRODUCT         "MKA1"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x534B
#define PRODUCT_ID      0x0002
#define DEVICE_VER		0x0001

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* key matrix pins  for beccas board*/
#define MATRIX_ROW_PINS { D1, D0, D4, C6 }
#define MATRIX_COL_PINS { D7, E6, B4, B5 }

#define ENCODERS_PAD_A { B6 }
#define ENCODERS_PAD_B { B2 }
#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4




#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0x6F, 0xD2, 0x03, 0xC4, 0x16, 0xAF, 0x61, 0x27}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }