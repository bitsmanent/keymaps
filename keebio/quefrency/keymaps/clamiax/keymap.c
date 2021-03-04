/* See LICENSE file for copyright and license details. */
#include QMK_KEYBOARD_H

#include "keymap_italian.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
IT_BKSL, IT_1,    IT_2,    IT_3,    IT_4,    IT_5,    IT_6,         IT_7,    IT_8,    IT_9,    IT_0,    IT_APOS, IT_IACC, KC_BSPC, KC_BSPC,
KC_TAB,  IT_Q,    IT_W,    IT_E,    IT_R,    IT_T,    IT_Y,         IT_U,    IT_I,    IT_O,    IT_P,    IT_EACC, IT_PLUS, IT_UACC, 
KC_BSPC, IT_A,    IT_S,    IT_D,    IT_F,    IT_G,    IT_H,         IT_J,    IT_K,    IT_L,    IT_OACC, IT_AACC, KC_ENT,
KC_LSFT, IT_Z,    IT_X,    IT_C,    IT_V,    IT_B,    IT_N,         IT_M,    IT_COMM, IT_DOT,  IT_MINS, KC_RSFT, KC_CAPS,
KC_LCTL, TT(1),   KC_APP,  KC_LALT, KC_SPC,           KC_SPC,       KC_SPC,  KC_RALT, KC_APP,  KC_NO,   TT(1),   KC_RCTL
),

[1] = LAYOUT(
KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,   KC_DEL,
KC_TRNS, KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_NO,   KC_7,    KC_8,    KC_9,    KC_PGUP, KC_NO,   KC_HOME,
KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,   KC_NO,        KC_NO,   KC_4,    KC_5,    KC_6,    KC_PGDN, KC_END,
KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_NO,   KC_1,    KC_2,    KC_3,    KC_UP,   KC_NO,
KC_TRNS, KC_TRNS, KC_NO,   KC_TRNS, KC_TRNS,          KC_TRNS,      KC_TRNS, KC_0,    KC_LEFT, KC_NO,   KC_DOWN, KC_RGHT
),
};
