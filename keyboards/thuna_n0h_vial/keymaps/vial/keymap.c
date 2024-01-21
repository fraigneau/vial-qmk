/* Copyright 2021 Samuel Lu
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "quantum.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	// Default layer
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

        {  0,  1,  2,  3,},
        {  4,  5,  6,  7,},
        {  8,  9, 10, 11 }

}, {

        {0, 0},   {15, 0},  {30, 0}, {45, 0},
        {224, 12.8}, {218, 12.8},{192, 12.8},{176, 12.8},
        {0, 25.6},{16, 25.6}, {32, 25.6}, {48, 25.6}

}, {

        4,4,4,4,
        4,4,4,4,
        4,4,4,4

} };
#endif