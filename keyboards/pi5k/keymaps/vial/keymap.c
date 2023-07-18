#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_0, KC_1, KC_2, KC_3, KC_4, KC_5),
    [1] = LAYOUT(KC_6, KC_7, KC_8, KC_9, KC_1, KC_2)
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_6, KC_7)  },
    [1] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)  }
    
    
};
#endif

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    // Key Matrix to LED Index
    { 0 },
    { 1 },
    { 2 },
    { 3 },
    { 4 },
    { 5 }
}, {
    // LED Index to Physical Position
    { 5, 0 }, //1
    { 1, 0 }, 
    { 2, 0 },
    { 3, 0 },
    { 4, 0 },
    { 0, 0 },
    { 1, 0 }
}, {
    // LED Index to Flag
    1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4
} };

uint8_t rgb_matrix_map_row_column_to_led_kb(uint8_t row, uint8_t column, uint8_t *led_i) {
    if (row == 4) {
        switch (column) {
            case 1: // center encoder
                led_i[0] = 71;
                return 1;

        }
    }
    return 0;
}

#endif

