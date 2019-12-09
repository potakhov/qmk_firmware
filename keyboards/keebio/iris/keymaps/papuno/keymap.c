#include QMK_KEYBOARD_H

#define KC_          KC_TRNS
#define KC_LGRV      LT(2,KC_GRV)
#define KC_TBSH      LSFT_T(KC_TAB)
#define KC_ALSP      LALT_T(KC_SPC)
#define KC_LUPR      MO(1)
#define KC_CTEQ      LCTL_T(KC_EQL)
#define KC_GUIQ      LGUI(KC_Q)
#define KC_GUIS      LGUI(KC_S)
#define KC_GUIW      LGUI(KC_W)
#define KC_GUIZ      LGUI(KC_Z)
#define KC_GUIX      LGUI(KC_X)
#define KC_GUIC      LGUI(KC_C)
#define KC_GUIV      LGUI(KC_V)
#define KC_GUIT      LGUI(KC_T)
#define KC_GUIA      LGUI(KC_A)
#define KC_GGRV      LGUI(KC_GRV)
#define KC_GITB      LGUI(KC_TAB)
#define KC_GISP      LGUI(KC_SPC)
#define KC_MOSX      MAGIC_UNSWAP_CTL_GUI
#define KC_MWIN      MAGIC_SWAP_CTL_GUI

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     LGRV,  1,   2,   3,   4,   5,                  6,   7,   8,   9,   0, MINS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
      TAB,  Q,   W,   E,   R,   T,                  Y,   U,   I,   O,   P, BSLS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     TBSH,  A,   S,   D,   F,   G,                  H,   J,   K,   L, SCLN, ENT,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     LSFT,  Z,   X,   C,   V,   B, LALT,     RGUI,  N,   M, COMM, DOT,SLSH,RSFT,
  //`----+----+----+----+----+----+----/    \----+----+----+----+----+----+----'
                       LCTL, ESC, SPC,        LUPR, BSPC,CTEQ
  //                  `----+----+----'        `----+----+----'
  ),


  [1] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     GGRV, F1,  F2,  F3,  F4,  F5,                 F6,  F7,  F8,  F9, F10, BSPC,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,GUIQ,GUIW,    ,PGUP,GUIT,                   ,HOME, UP, END, PSCR,PAUS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     GITB,GUIA,GUIS,    ,PGDN,    ,                   ,LEFT,DOWN,RGHT,QUOT,    ,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     LSFT,GUIZ,GUIX,GUIC,GUIV,    ,    ,     RGUI,    ,    ,LBRC,RBRC,    ,RSFT,
  //`----+----+----+----+----+----+----/    \----+----+----+----+----+----+----'
                       LCTL, GRV,GISP,            ,     ,
  //                  `----+----+----'        `----+----+----'
  ),


  [2] = LAYOUT(
  //,-------+--------+--------+--------+--------+--------.                    ,--------+--------+--------+--------+--------+---------.
     KC_TRNS, KC_MOSX, KC_MWIN, _______, _______, _______,                      RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, _______, _______,
  //|-------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+---------|
     _______, _______, _______, _______, _______, _______,                      RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, _______, RGB_TOG,
  //|-------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+---------|
     _______, _______, _______, _______, _______, _______,                      _______, _______,RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G,
  //|-------+--------+--------+--------+--------+--------+--------.  ,--------|--------+--------+--------+--------+--------+---------|
     _______, _______, _______, _______, _______, _______, BL_INC,     KC_VOLU, _______, _______, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW,
  //`-------+--------+--------+--------+--------+--------+-------/    \-------+--------+--------+--------+--------+--------+---------'
                                        BL_TOGG,_______, BL_DEC,         KC_VOLD,KC_MPRV,KC_MNXT
  //                                   `-------+-------+-------'        `-------+-------+-------'
  ),
};
