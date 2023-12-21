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
        _____,     _____,     _____,     _____,     KC_MUTE,
    )
};
