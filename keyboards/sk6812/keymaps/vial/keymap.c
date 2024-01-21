#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_thuna(
        KC_P1,     KC_P2,     KC_P3,     KC_P4,
        KC_P5,     KC_P6,     KC_P7,     KC_P8,    
        KC_P9,     KC_P0,     KC_PDOT,   KC_PDOT,   KC_MUTE,
        								 KC_MUTE
    ),

    [1] = LAYOUT_thuna(
        KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
        KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,    
        KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,   KC_TRNS,
        								       KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] =   { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  }
    //                  Encoder 1                                     Encoder 2
};
#endif

#if defined(RGB_MATRIX_ENABLE)
    led_config_t g_led_config = { {
    // Key Matrix to LED Index
    { 0,  1,  2,  3, },
    { 4,  5,  6,  7, },
    { 8,  9, 10, 11  }
    }, {
    // LED Index to Physical Position
    { 0, 0}, { 1,  0 }, { 2,  0 }, { 3,  0 },
    { 0, 1}, { 1,  1 }, { 2,  1 }, { 3,  1 },
    { 0, 2}, { 1,  2 }, { 2,  2 }, { 3,  2 }
    }, {
    // LED Index to Flag
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1
    } };
#endif