#include QMK_KEYBOARD_H

#define KC_          KC_TRNS
#define KC_LESC      LT(2,KC_ESC)
#define KC_LUPR      MO(1)
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
#define KC_GUIF      LGUI(KC_F)
#define KC_SFQU      LSFT(KC_QUOT)
#define KC_MOSX      MAGIC_UNSWAP_CTL_GUI
#define KC_MWIN      MAGIC_SWAP_CTL_GUI
#define KC_SEQL      LSFT(KC_EQL)
#define KC_TGBL      BL_TOGG
#define KC_STBL      BL_STEP
#define KC_RST       RESET
#ifdef HARDCODE_RIGHT_SIDE
#define KC_USB       OUT_USB
#define KC_BT        OUT_BT
#else
#define KC_USB       KC_TRNS
#define KC_BT        KC_TRNS
#endif
#define KC_GUEN      LGUI_T(KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     LESC,  1,   2,   3,   4,   5,                  6,   7,   8,   9,   0, MINS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
      GRV,  Q,   W,   E,   R,   T,                  Y,   U,   I,   O,   P, BSLS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
      TAB,  A,   S,   D,   F,   G,                  H,   J,   K,   L, SCLN,QUOT,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     LSFT,  Z,   X,   C,   V,   B,                  N,   M, COMM, DOT,SLSH,SFTENT,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
          SEQL, EQL, ESC,LUPR, SPC,               BSPC,LUPR,GUEN,LBRC,RBRC,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
                         LALT,LGUI,               RCTL,RALT
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
  ),

  [1] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     GGRV, F1,  F2,  F3,  F4,  F5,                 F6,  F7,  F8,  F9, F10, BSPC,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,GUIQ,GUIW,PGUP,    ,GUIT,                   ,HOME,  UP, END,PSCR,PAUS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,GUIA,GUIS,PGDN,GUIF,    ,                   ,LEFT,DOWN,RGHT,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,GUIZ,GUIX,GUIC,GUIV,    ,                   ,    ,    ,    ,    ,    ,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
              ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
                             ,    ,                   ,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
  ),

  [2] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,MOSX,MWIN,  BT, USB,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,                   ,    ,    ,    ,    , RST,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
              ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
                         TGBL,STBL,                   ,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
  )
};
