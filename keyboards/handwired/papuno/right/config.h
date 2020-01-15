#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xBABE
#define DEVICE_VER      0x0100
#define MANUFACTURER    pap.uno
#define PRODUCT         PAP.UNO Dactyl 0.10
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
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

// EEPROM usage
#define EEPROM_MAGIC 0x451F
#define EEPROM_MAGIC_ADDR 34
// Bump this every time we change what we store
// This will automatically reset the EEPROM with defaults
// and avoid loading invalid data from the EEPROM
#define EEPROM_VERSION 0x08
#define EEPROM_VERSION_ADDR 36

#define BACKLIGHT_PIN B5
#define BACKLIGHT_LEVELS 5

#define HARDCODE_MASTER_MODE
#define HARDCODE_RIGHT_SIDE
