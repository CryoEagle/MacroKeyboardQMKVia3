#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "quantum.h"

#define ____ KC_TRNS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
       	KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , 
        KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
        KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,
        KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS
    ),

    [1] = LAYOUT(
        ____, ____, ____, ____ ,
        ____, ____, ____, ____ ,
        ____, ____, ____, ____ ,
        ____, ____, ____, ____
    ),

    [2] = LAYOUT(
        ____, ____, ____, ____ ,
        ____, ____, ____, ____ ,
        ____, ____, ____, ____ ,
        ____, ____, ____, ____
    ),

    [3] = LAYOUT(
        ____, ____, ____, ____ ,
        ____, ____, ____, ____ ,
        ____, ____, ____, ____ ,
        ____, ____, ____, ____
    ),

};

void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
  uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
  return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {

  if (index == 0) {
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
  } 


  return false;
}