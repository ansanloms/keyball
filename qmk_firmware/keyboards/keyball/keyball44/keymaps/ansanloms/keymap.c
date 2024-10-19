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

const uint16_t PROGMEM tab_q_combo[] = {KC_TAB, KC_Q, COMBO_END};
const uint16_t PROGMEM p_mins_combo[] = {KC_P, KC_MINS, COMBO_END};
const uint16_t PROGMEM scln_ent_combo[] = {KC_SCLN, KC_ENT, COMBO_END};

combo_t key_combos[] = {
    COMBO(tab_q_combo, KC_ESC),
    COMBO(p_mins_combo, KC_BSPC),
    COMBO(scln_ent_combo, KC_DEL),
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default
  [0] = LAYOUT_universal(
    KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T         ,                                    KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_MINS  ,
    KC_LCTL  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G         ,                                    KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_ENT   ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B         ,                                    KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_RSFT  ,
               KC_LALT  , KC_LGUI  ,            MO(1)    , LT(2,KC_SPC) , _______  ,              MO(4)    , MO(3)    , XXXXXXX             , XXXXXXX  , TO(0)
  ),

  [1] = LAYOUT_universal(
    KC_ESC   , _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______  , KC_BSPC  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , KC_BTN1  , KC_BTN2  , SCRL_MO  , KC_WH_U  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , KC_BTN4  , KC_BTN5  , _______  , KC_WH_D  , _______  ,
               _______  , _______  ,            _______  , _______  , _______  ,                  _______  , _______  , _______             , _______  , _______
  ),

  [2] = LAYOUT_universal(
    KC_ESC   , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                        KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_BSPC  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , KC_EQUAL , KC_BSLS  , KC_GRV   , KC_QUOT  , KC_DEL   ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , KC_LBRC  , KC_RBRC  , _______  , _______  , _______  ,
               _______  , _______  ,            _______  , _______  , _______  ,                  _______  , _______  , _______             , _______  , _______
  ),

  [3] = LAYOUT_universal(
    KC_ESC   , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                        XXXXXXX  , KC_SLEP  , KC_MUTE  , KC_VOLD  , KC_VOLU  , KC_BSPC  ,
    _______  , KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   ,                                        KC_LEFT  , KC_DOWN  , KC_UP    , KC_RIGHT , XXXXXXX  , _______  ,
    _______  , KC_F11   , KC_F12   , KC_F13   , KC_F14   , KC_F15   ,                                        XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  ,
               _______  , _______  ,            _______  , _______  , _______  ,                  _______  , _______  , _______             , _______  , _______
  ),

  [4] = LAYOUT_universal(
    KC_ESC   , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                        XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_BSPC  ,
    _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                        XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  ,
    _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                        XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  ,
               _______  , _______  ,            _______  , _______  , _______  ,                  _______  , _______  , _______             , _______  , _______
  ),

  [5] = LAYOUT_universal(
    KC_ESC   , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                        XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_BSPC  ,
    _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                        XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  ,
    _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                        XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  ,
               _______  , _______  ,            _______  , _______  , _______  ,                  _______  , _______  , _______             , _______  , _______
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

static const char PROGMEM number_5[] = {
    0,255,255,255,255,255,255, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63,  0,  0,255,255,255,255,255,255,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,  0,  0,  0,  0,  0,  0,  0,  0,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,252,252,252,252,252,252,  0,  0,192,192,192,192,192,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,  0,
    0, 15, 15, 15, 15, 15, 15,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240, 15, 15, 15, 15, 15, 15,  0,
};

static const char PROGMEM animation_0[] = {
    0,  0,  0,  0,  0,  0,  0,  0,  0,240, 12,  2,  2,  1, 65,129,  1,  1,  1,  2,114, 12,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 60, 71, 70, 76, 52, 36, 34, 33, 32, 32, 96,160,146,152,151, 96,  0,  0,  0,  0,  0,  0,  0,  0,
};

static const char PROGMEM animation_1[] = {
    0,  0,  0,  0,  0,  0,  0,  0,240,  8, 12, 10,  2,  1,  1,  1,113,  1,114,  2, 12,248,  8,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 29, 39, 72,144,144,160, 96, 32, 34, 80, 80, 76, 35, 29,  0,  0,  0,  0,  0,  0,  0,  0,  0,
};

static const char PROGMEM animation_2[] = {
    0,  0,  0,  0,  0,  0,  0,  0,192, 48,  8,  4,  4,  2,  2,  2,  2,226,  2,228, 24,224, 64,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,  4,  8, 62, 88,144,160,160,160,224,164, 96, 16, 15,  8,  7,  0,  0,  0,  0,  0,  0,  0,  0,
};

void oled_render_layer(void) {
    switch (get_highest_layer(layer_state)) {
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
        case 5:
            oled_write_raw_P(number_5, sizeof(number_5));
            break;
        case 0:
        default:
            oled_write_raw_P(number_0, sizeof(number_0));
            break;
    }
}

void oled_render_animation(void) {
    static uint32_t uptime_s;
    uptime_s = timer_read32() / 1000;

    switch (uptime_s % 4) {
        case 1:
        case 3:
            oled_write_raw_P(animation_1, sizeof(animation_1));
            break;
        case 2:
            oled_write_raw_P(animation_2, sizeof(animation_2));
            break;
        case 0:
        default:
            oled_write_raw_P(animation_0, sizeof(animation_0));
            break;
    }
}

void oledkit_render_info_user(void) {
    oled_set_cursor(0, 3);
    oled_render_layer();
    oled_set_cursor(0, 12);
    oled_render_animation();
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return is_keyboard_master() ? OLED_ROTATION_270 : OLED_ROTATION_180;
}

#endif

void keyboard_post_init_user(void) {
    // なんか pointing_device_init_user が発火しないので、とりあえずここ。
    set_auto_mouse_enable(true);
}

void pointing_device_init_user(void) {
    set_auto_mouse_enable(true);
}
