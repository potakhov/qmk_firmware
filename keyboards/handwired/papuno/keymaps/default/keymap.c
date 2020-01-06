#include QMK_KEYBOARD_H

#define KC_          KC_TRNS
#define KC_LGRV      LT(2,KC_GRV)
#define KC_TBSH      LSFT_T(KC_TAB)
#define KC_ALSP      LALT_T(KC_SPC)
#define KC_LUPR      MO(1)
#define KC_LSYS      MO(2)
#define KC_GUES      LGUI_T(KC_ESC)
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
#define KC_SFQU      LSFT(KC_QUOT)
#define KC_MOSX      MAGIC_UNSWAP_CTL_GUI
#define KC_MWIN      MAGIC_SWAP_CTL_GUI
#define KC_SLBR      LSFT(KC_LBRC)
#define KC_SRBR      LSFT(KC_RBRC)
#define KC_SSCL      LSFT(KC_SCLN)
#define KC_TGBL      BL_TOGG
#define KC_STBL      BL_STEP
#define KC_RST       RESET

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     LGRV,  1,   2,   3,   4,   5,                  6,   7,   8,   9,   0, MINS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
      TAB,  Q,   W,   E,   R,   T,                  Y,   U,   I,   O,   P, BSLS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     TBSH,  A,   S,   D,   F,   G,                  H,   J,   K,   L, SCLN,QUOT,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     LSFT,  Z,   X,   C,   V,   B,                  N,   M, COMM, DOT,SLSH,RSFT,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
          SLBR,SRBR,LCTL,LGUI, SPC,               BSPC, LUPR,RCTL,LBRC,RBRC,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
                         LALT, ESC,               RGUI, ENT
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
  ),

  [1] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     GGRV, F1,  F2,  F3,  F4,  F5,                 F6,  F7,  F8,  F9, F10, BSPC,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     GITB,GUIQ,GUIW,    ,PGUP,GUIT,                EQL,HOME,  UP, END,PSCR,PAUS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
      TAB,GUIA,GUIS,    ,PGDN,    ,               SFQU,LEFT,DOWN,RGHT,QUOT,    ,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
         ,GUIZ,GUIX,GUIC,GUIV,    ,               SLBR,SRBR,LBRC,RBRC,    ,    ,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
              ,    ,    ,    ,    ,                   ,    ,    ,    ,    ,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
                             ,    ,                   ,
  //`----+----+----+----+----+----|              |----+----+----+----+----+----'
  ),

  [2] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
         ,MOSX,MWIN,    ,    ,    ,                   ,    ,    ,    ,    ,    ,
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
