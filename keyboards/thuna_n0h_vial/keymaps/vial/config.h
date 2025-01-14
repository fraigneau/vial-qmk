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
#define VIAL_KEYBOARD_UID {0xC2, 0x01, 0x44, 0x9B, 0x87, 0x09, 0x23, 0xF2} // ? Génère le 15/12/23
//#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
//#define VIAL_UNLOCK_COMBO_COLS { 2, 2 }

// The pin connected to the data pin of the LEDs
#define WS2812_DI_PIN B6
// The number of LEDs connected
#define RGB_MATRIX_LED_COUNT 12

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

