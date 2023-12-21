/*
Copyright 2023 Fraigneau's society

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Vial
#define VIAL_KEYBOARD_UID {0xC2, 0x01, 0x44, 0x9B, 0x87, 0x09, 0x23, 0xF2} //Génère le 15/12/23
//#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
//#define VIAL_UNLOCK_COMBO_COLS { 2, 2 }

#define ENCODERS_PAD_A { F4, F5 }
#define ENCODERS_PAD_B { D2, D3 }
#define ENCODER_RESOLUTIONS { 4 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 2
#define VIAL_KEY_OVERRIDE_ENTRIES 4
#define VIAL_TAP_DANCE_ENTRIES 4

//#define WS2812_DI_PIN B6
//#define RGB_MATRIX_LED_COUNT 12
//#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB