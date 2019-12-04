#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_kc(
  //,----+----+----+----+----+----.              ,----+----+----+----+----+----.
     1,  1,   2,   3,   4,   5,                  6,   7,   8,   9,   0, MINS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
      TAB,  Q,   W,   E,   R,   T,                  Y,   U,   I,   O,   P, BSLS,
  //|----+----+----+----+----+----|              |----+----+----+----+----+----|
     4,  A,   S,   D,   F,   G,                  H,   J,   K,   L, SCLN,QUOT,
  //|----+----+----+----+----+----+----.    ,----|----+----+----+----+----+----|
     LSFT,  Z,   X,   C,   V,   B,                  N,   M, COMM, DOT,SLSH,RSFT,
  //`----+----+----+----+----+----+----/    \----+----+----+----+----+----+----'
                       LCTL, 5,SPC, E, F,  2, BSPC,3, G, H,
  //                  `----+----+----'        `----+----+----'
  A, B, C, D)
};
