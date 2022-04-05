#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

const key_override_t override1 = ko_make_basic(MOD_MASK_SHIFT, KC_F12, S(KC_INS)); // Shift + F12 = Shift + Ins
const key_override_t override2 = ko_make_basic(MOD_MASK_ALT, KC_4, A(KC_F4));      // Alt   + 4   = Alt + F4
const key_override_t override3 = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, KC_TILDE);  // Shift + Esc = Tilde
const key_override_t override4 = ko_make_basic(MOD_MASK_ALT, KC_ESC, A(KC_GRV));   // Alt   + Esc = Alt + `     = keyboard layout change

const key_override_t **key_overrides = (const key_override_t *[]){
    &override1,
    &override2,
    &override3,
    &override4,
    NULL
};

// disregard
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_ansi(LT(3,KC_ESC),KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_BSPC,KC_HOME,KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,KC_BSLS,KC_PGUP,LT(3,KC_BSPC),KC_A,KC_S,KC_D,LT(3,KC_F),KC_G,KC_H,LT(2,KC_J),KC_K,KC_L,KC_SCLN,KC_QUOT,KC_ENT,KC_PGDN,KC_LSFT,LT(4,KC_Z),KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_RSFT,KC_UP,KC_END,KC_LCTL,KC_LGUI,LM(1,MOD_LALT),KC_SPC,KC_RALT,KC_INS,KC_NO,KC_LEFT,KC_DOWN,KC_RGHT),
    [1] = LAYOUT_65_ansi(KC_GRV,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_DEL,KC_HOME,KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,KC_BSLS,KC_PGUP,KC_NO,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,KC_ENT,KC_PGDN,KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_RSFT,KC_UP,KC_END,KC_LCTL,KC_LGUI,KC_TRNS,KC_SPC,KC_RALT,KC_INS,KC_NO,KC_LEFT,KC_DOWN,KC_RGHT),
    [2] = LAYOUT_65_ansi(KC_NO,KC_1,KC_2,KC_3,KC_PLUS,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_BSPC,KC_NO,KC_NO,KC_4,KC_5,KC_6,KC_MINS,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_7,KC_8,KC_9,KC_ASTR,KC_NO,KC_NO,KC_TRNS,KC_NO,KC_NO,KC_NO,KC_NO,KC_ENT,KC_NO,KC_NO,KC_COMM,KC_0,KC_DOT,KC_SLSH,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_RSFT,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_SPC,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO),
    [3] = LAYOUT_65_ansi(KC_NO,KC_GRV,KC_TILD,KC_NO,KC_NO,KC_NO,KC_NO,KC_MINS,KC_EQL,KC_NO,KC_NO,KC_NO,KC_NO,KC_BSPC,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_LPRN,KC_RPRN,KC_LBRC,KC_RBRC,KC_NO,KC_NO,KC_NO,KC_NO,KC_TRNS,KC_NO,KC_NO,KC_NO,KC_TRNS,KC_NO,KC_NO,KC_SCLN,KC_QUOT,KC_SLSH,KC_BSLS,KC_NO,KC_NO,KC_NO,KC_LSFT,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_COMM,KC_DOT,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_SPC,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO),
};
