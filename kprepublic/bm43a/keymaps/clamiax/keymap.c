#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,   KC_COMMA, KC_DOT,   KC_RSFT,
        KC_LCTL, MO(1), KC_LALT, KC_SPC,                 KC_SPC,              KC_LEFT,   KC_UP, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        QK_BOOT,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,   BL_TOGG, BL_DOWN, BL_UP,   BL_STEP, _______, _______, _______, _______, _______, _______,
        _______,          RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______,
        _______, _______, _______, _______,                _______,             _______, _______, _______, _______
    ),

};

