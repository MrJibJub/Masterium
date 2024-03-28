// Copyright 2024 JibJub Boards (@MrJibJub)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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

#define ENCODERS_PAD_A { B5 }
#define ENCODERS_PAD_B { B6 }
#define ENCODER_RESOLUTION 4
#define DEBOUNCE 10
#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 2
