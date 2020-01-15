#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xBEEF
#define DEVICE_VER      0x0100
#define MANUFACTURER    pap.uno
#define PRODUCT         PAP.UNO Dactyl left
#define DESCRIPTION     Split wireless ergonomic keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { D2, D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3 }
#define MATRIX_ROW_PINS_RIGHT { F7, F6, F5, F4, F1, F0 }
#define MATRIX_COL_PINS_RIGHT { D2, D6, B7, B6, D7, C6 }
#define SPLIT_HAND_PIN D3
#define QMK_ESC_OUTPUT F4
#define QMK_ESC_INPUT D2

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 9

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

#define BACKLIGHT_PIN B5
#define BACKLIGHT_LEVELS 5

#define HARDCODE_SLAVE_MODE
#define HARDCODE_LEFT_SIDE
