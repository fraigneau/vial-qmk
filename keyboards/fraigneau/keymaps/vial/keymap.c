// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ A │ B │ C │ D │
     * ├───┼───┼───┼───┤
     * │ E │ F │ G │ H │
     * ├───┼───┼───┼───┼───┐
     * │ I │ J │ K │ L │ 2 │
     * └───┴───┴───┼───┼───┘
     *             │ 1 │
     *             └───┘
     * [A;L]=Key
     * [1;2]=Rotary Encodeur Switch
     * 
     */
    [0] = LAYOUT(
        KC_P1,     KC_P2,     KC_P3,     KC_P4,
        KC_P5,     KC_P6,     KC_P7,     KC_P8,    
        KC_P9,     KC_P0,     KC_PDOT,   KC_PDOT,   KC_MPLY,
        KC_MUTE,
    )
};
// #if defined(ENCODER_MAP_ENABLE)

// const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

//     [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
//     [1] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
//     [2] =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
//     [3] =   { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),          ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
//     //                  Encoder 1                                     Encoder 2
    
// };
// #endif