/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    KC_ESC   , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                  KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_MINS  ,
    KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                  KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_BSPC  ,
    KC_LCTL  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                  KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_ENT   ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     , XXXXXXX  ,            XXXXXXX  , KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_RSFT  ,
    XXXXXXX  , KC_LALT  , KC_LGUI  , XXXXXXX  , TT(1)    , KC_SPC   , MO(2)    ,            MO(3)    , TT(4)    , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , TO(0)
  ),

  [1] = LAYOUT_universal(
    TO(0)    , _______  , _______  , _______  , _______  , _______  ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  XXXXXXX  , KC_BTN1  , KC_BTN2  , SCRL_MO  , XXXXXXX  , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , XXXXXXX  , KC_BTN4  , KC_BTN5  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______
  ),

  [2] = LAYOUT_universal(
    TO(0)    , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_EQUAL , KC_BSLS  , KC_GRV   ,
    _______  , KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_LBRC  , KC_RBRC  , KC_DEL   ,
    _______  , KC_F11   , KC_F12   , KC_F13   , KC_F14   , KC_F15   ,                                  KC_LEFT  , KC_DOWN  , KC_UP    , KC_RIGHT , KC_QUOT  , XXXXXXX  ,
    _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  ,            _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______
  ),

  [3] = LAYOUT_universal(
    TO(0)    , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                  XXXXXXX  , RGB_TOG  , KC_MUTE  , KC_VOLD  , KC_VOLU  , XXXXXXX  ,
    _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                  XXXXXXX  , KC_SLEP  , KC_MPRV  , KC_MPLY  , KC_MNXT  , XXXXXXX  ,
    _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                  KC_LEFT  , KC_DOWN  , KC_UP    , KC_RIGHT , XXXXXXX  , XXXXXXX  ,
    _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  ,            _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______
  ),

  [4] = LAYOUT_universal(
    KC_ESC   , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    KC_LCTL  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                  XXXXXXX  , KC_BTN1  , KC_BTN2  , SCRL_MO  , XXXXXXX  , XXXXXXX  ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     , XXXXXXX  ,            XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_SLSH  , KC_RSFT  ,
    XXXXXXX  , KC_LALT  , KC_LGUI  , XXXXXXX  , XXXXXXX  , KC_SPC   , XXXXXXX  ,            XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______
  ),
};
// clang-format on

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

static const char PROGMEM number_0[] = {
    0,192,192,192,192,192,192, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63,192,192,192,192,192,192,  0,  0,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,240,240,240,240,240,240,255,255,255,255,255,255,  0,  0,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,252,252,252,252,252,252,  3,  3,  3,  3,  3,  3,255,255,255,255,255,255,  0,  0,255,255,255,255,255,255, 63, 63, 63, 63, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,  0,
    0, 15, 15, 15, 15, 15, 15,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240, 15, 15, 15, 15, 15, 15,  0,
};

static const char PROGMEM number_1[] = {
    0,  0,  0,  0,  0,  0,  0,192,192,192,192,192,192,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,240,240,240,240,240,240, 15, 15, 15, 15, 15, 15,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,  3,  3,  3,  3,  3,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,240,240,240,240,240,240,240,240,240,240,240,240,255,255,255,255,255,255,240,240,240,240,240,240,240,240,240,240,240,240,  0,
};

static const char PROGMEM number_2[] = {
    0,192,192,192,192,192,192, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63,192,192,192,192,192,192,  0,  0, 15, 15, 15, 15, 15, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,252,252,252,252,252,252,252,252,252,252,252,252,  3,  3,  3,  3,  3,  3,  0,  0,192,192,192,192,192,192, 63, 63, 63, 63, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,255,255,255,255,255,255,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,  0,
};

static const char PROGMEM number_3[] = {
    0,192,192,192,192,192,192, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63,192,192,192,192,192,192,  0,  0, 15, 15, 15, 15, 15, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,  3,  3,  3,  3,  3,  3,  0,  0,192,192,192,192,192,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,  0,
    0, 15, 15, 15, 15, 15, 15,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240, 15, 15, 15, 15, 15, 15,  0,
};

static const char PROGMEM number_4[] = {
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,192,192,192,192,192,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,240,240,240,240,240,240, 15, 15, 15, 15, 15, 15,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,252,252,252,252,252,252,  3,  3,  3,  3,  3,  3,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63,255,255,255,255,255,255, 63, 63, 63, 63, 63, 63,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,
};

void oled_render_layer(void) {
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_raw_P(number_0, sizeof(number_0));
            break;
        case 1:
            oled_write_raw_P(number_1, sizeof(number_1));
            break;
        case 2:
            oled_write_raw_P(number_2, sizeof(number_2));
            break;
        case 3:
            oled_write_raw_P(number_3, sizeof(number_3));
            break;
        case 4:
            oled_write_raw_P(number_4, sizeof(number_4));
            break;
        default:
            oled_write_raw_P(number_0, sizeof(number_0));
            break;
    }
}

void oledkit_render_info_user(void) {
    oled_advance_page(true);
    oled_advance_page(true);
    oled_advance_page(true);

    oled_render_layer();
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return is_keyboard_master() ? OLED_ROTATION_270 : OLED_ROTATION_180;
}

#endif

void pointing_device_init_user(void) {
    set_auto_mouse_enable(true);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = biton32(state);

    if (get_auto_mouse_enable() && layer == get_auto_mouse_layer()) {
        rgblight_sethsv(HSV_TURQUOISE);
    } else if (layer == 4) {
        rgblight_sethsv(HSV_RED);
    } else {
        rgblight_sethsv(HSV_OFF);
    }

    return state;
}
