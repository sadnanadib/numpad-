#include QMK_KEYBOARD_H

#define ____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
		KC_F1, KC_F2, KC_F3, KC_F4, 
		KC_NLCK, KC_SLSH, KC_ASTR, KC_MINS, 
		KC_F5, KC_7, KC_8, KC_9, 
		KC_F6, KC_4, KC_5, KC_6, KC_PLUS, 
		KC_F7, KC_1, KC_2, KC_3, 
		KC_F8, KC_INS, KC_DEL, KC_ENT 
    ),

    [1] = LAYOUT(
        ____, ____,    ____,   ____,
        ____, ____,    ____,   ____,
        ____,    ____,   ____,		
        ____, ____,    ____,   ____,   ____,
        ____, ____,    ____,   ____,
        ____, ____,    ____,   ____,		
    ),

    [2] = LAYOUT(
        ____, ____,    ____,   ____,
        ____, ____,    ____,   ____,
        ____,    ____,   ____,		
        ____, ____,    ____,   ____,   ____,
        ____, ____,    ____,   ____,
        ____, ____,    ____,   ____,
    ),

    [3] = LAYOUT(
        ____, ____,    ____,   ____,
        ____, ____,    ____,   ____,
        ____,    ____,   ____,		
        ____, ____,    ____,   ____,   ____,
        ____, ____,    ____,   ____,
        ____, ____,    ____,   ____,
    ),

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { 
        if (clockwise) {
            tap_code(KC_AUDIO_VOL_UP);
        } else {
            tap_code(KC_AUDIO_VOL_DOWN);
        }
    }
    return false;
}