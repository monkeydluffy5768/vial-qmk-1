/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x6F, 0xD2, 0x03, 0xC4, 0x26, 0xAF, 0x61, 0x27}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 0}
#define WS2812_DI_PIN GP12
#define RGB_DI_PIN GP12
#define RGB_MATRIX_LED_COUNT 20
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define DRIVER_LED_TOTAL 20
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN	
#define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral
