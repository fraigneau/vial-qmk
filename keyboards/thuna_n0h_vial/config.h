// Copyright 2023 fraigneau (@fraigneau)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define ENCODERS_PAD_A { F4, D2 }
#define ENCODERS_PAD_B { F5, D4 }
#define ENCODER_RESOLUTIONS { 2, 2 }
#define ENCODER_MAP_KEY_DELAY 10


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define DYNAMIC_KEYMAP_LAYER_COUNT 2