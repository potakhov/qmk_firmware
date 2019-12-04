#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xA010
#define PRODUCT_ID      0x1234
#define DEVICE_VER      0x0100
#define MANUFACTURER    Alexp
#define PRODUCT         Dactyl Keyboard
#define DESCRIPTION     Split ergonomic keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { F7, F6, F5, F4, F1, F0 }
#define MATRIX_COL_PINS { C7, D6, B7, B6, D7, D6 }
#define MATRIX_ROW_PINS_RIGHT { F7, B6, D5, F4, F1, F0 }
#define MATRIX_COL_PINS_RIGHT { C7, D6, B7, B6, D7, D6 }
#define SPLIT_HAND_PIN D3
#define QMK_ESC_OUTPUT F7
#define QMK_ESC_INPUT C7

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

// TODO: refactor with new user EEPROM code (coming soon)
#define EEPROM_MAGIC 0x451F
#define EEPROM_MAGIC_ADDR 34
// Bump this every time we change what we store
// This will automatically reset the EEPROM with defaults
// and avoid loading invalid data from the EEPROM
#define EEPROM_VERSION 0x08
#define EEPROM_VERSION_ADDR 36
