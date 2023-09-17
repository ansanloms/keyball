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
    KC_DEL   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                  KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_INT3  ,
    KC_TAB   , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                  KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , S(KC_7)  ,
    MO(1)    , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     , KC_RBRC  ,              KC_NUHS, KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_RSFT  ,
    _______  , KC_LCTL  , KC_LALT  , KC_LGUI,LT(1,KC_LNG2),LT(2,KC_SPC),LT(3,KC_LNG1),    KC_BSPC,LT(2,KC_ENT),LT(1,KC_LNG2),KC_RGUI, _______ , KC_RALT  , KC_PSCR
  ),

  [1] = LAYOUT_universal(
    S(KC_ESC), S(KC_1)  , KC_LBRC  , S(KC_3)  , S(KC_4)  , S(KC_5)  ,                                  KC_EQL   , S(KC_6)  ,S(KC_QUOT), S(KC_8)  , S(KC_9)  ,S(KC_INT1),
    S(KC_DEL), S(KC_Q)  , S(KC_W)  , S(KC_E)  , S(KC_R)  , S(KC_T)  ,                                  S(KC_Y)  , S(KC_U)  , S(KC_I)  , S(KC_O)  , S(KC_P)  ,S(KC_INT3),
    S(KC_TAB), S(KC_A)  , S(KC_S)  , S(KC_D)  , S(KC_F)  , S(KC_G)  ,                                  S(KC_H)  , S(KC_J)  , S(KC_K)  , S(KC_L)  , KC_QUOT  , S(KC_2)  ,
    _______  , S(KC_Z)  , S(KC_X)  , S(KC_C)  , S(KC_V)  , S(KC_B)  ,S(KC_RBRC),           S(KC_NUHS), S(KC_N)  , S(KC_M)  ,S(KC_COMM), S(KC_DOT),S(KC_SLSH),S(KC_RSFT),
    _______  ,S(KC_LCTL),S(KC_LALT),S(KC_LGUI), _______  , _______  , _______  ,            _______  , _______  , _______  ,S(KC_RGUI), _______  , S(KC_RALT), _______
  ),

  [2] = LAYOUT_universal(
    _______  , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    _______  , _______  , KC_7     , KC_8     , KC_9     , _______  ,                                  _______  , KC_LEFT  , KC_UP    , KC_RGHT  , _______  , KC_F12   ,
    _______  , _______  , KC_4     , KC_5     , KC_6     ,S(KC_SCLN),                                  KC_PGUP  , KC_BTN1  , KC_DOWN  , KC_BTN2  , KC_BTN3  , _______  ,
    _______  , _______  , KC_1     , KC_2     , KC_3     ,S(KC_MINS), S(KC_8)  ,            S(KC_9)  , KC_PGDN  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , KC_0     , KC_DOT   , _______  , _______  , _______  ,             KC_DEL  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [3] = LAYOUT_universal(
    RGB_TOG  , _______  , _______  , _______  , _______  , _______  ,                                  RGB_M_P  , RGB_M_B  , RGB_M_R  , RGB_M_SW , RGB_M_SN , RGB_M_K  ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , _______  , _______  ,                                  RGB_M_X  , RGB_M_G  , RGB_M_T  , RGB_M_TW , _______  , _______  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , _______  , _______  ,                                  CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE , KBC_RST  ,
    _______  , _______  , SCRL_DVD , SCRL_DVI , SCRL_MO  , SCRL_TO  , EE_CLR  ,            EE_CLR  , KC_HOME  , KC_PGDN  , KC_PGUP  , KC_END   , _______  , _______  ,
    QK_BOOT    , _______  , KC_LEFT  , KC_DOWN  , KC_UP    , KC_RGHT  , _______  ,            _______  , KC_BSPC  , _______  , _______  , _______  , _______  , QK_BOOT
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

static const char PROGMEM number_0[] = {
    0,  0,  0,  0,  0,  0,  0,192,112, 56, 56,  8,  8, 14,  6,  6,  6,  6, 14, 14, 14, 62, 62,120,248,248,192,192,  0,  0,  0,  0,  0,  0,  0,192,255,255,255, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,  7,255,255,255,  0,  0,  0,  0,  0,  0,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,255, 63,  0,  0,  0,  0,  0,  0,  1, 31, 31, 31, 62,248,224,224,192,192,192,192,192,192,192,  0,  0,  0, 32, 32, 24,  6,  6,  3,  3,  0,  0,  0,  0,
};

static const char PROGMEM number_1[] = {
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,240,224,224,224,240,240,240,254,254,254,254,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,248,255,255,255,255, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,248,255,255,127,127,127,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48,240,240,240, 62, 62, 63, 63, 63, 60, 60, 60, 60, 60, 48, 48, 48,  0,  0,  0,  0,  0,  0,  0,
};

static const char PROGMEM number_2[] = {
    0,  0, 64, 64,120,120,120,120, 60,  4,  7,  7,  7,  3,  3,  7,  7, 60, 60,252,192,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,192,120,120, 31,  3,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,224,224,124, 30, 30,  3,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,112,254,254,254,255,225, 96, 96, 96,112,112,112,112,112,112, 16, 16, 16, 30, 30, 30, 30, 30, 14, 14, 14,  0,  0,
};

static const char PROGMEM number_3[] = {
    0,  0,  0,  0,  0,  0,  0,  0,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,255,255, 15,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,224,224,224,224,224,120, 88,196,196,196,198,131,129,129,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7, 15, 15,255,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,192,192,192,192,192,192,128,128,128,128,128,192, 64, 56, 56, 15,  3,  0,  0,  0,  0,  0,  0,  0,
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
        default:
            oled_write_raw_P(number_0, sizeof(number_0));
            break;
    }
}

void oled_render_animation(void) {
    static uint32_t uptime_s;
    uptime_s = timer_read32() / 1000;

    switch (uptime_s % 4) {
        case 0:
            oled_write_raw_P(animation_0, sizeof(animation_0));
            break;
        case 1:
            oled_write_raw_P(animation_1, sizeof(animation_1));
            break;
        case 2:
            oled_write_raw_P(animation_2, sizeof(animation_2));
            break;
        case 3:
            oled_write_raw_P(animation_1, sizeof(animation_1));
            break;
        default:
            oled_write_raw_P(animation_0, sizeof(animation_0));
            break;
    }
}

void oledkit_render_info_user(void) {
    oled_advance_page(true);
    oled_advance_page(true);
    oled_advance_page(true);

    oled_render_layer();
}

void oledkit_render_logo_user(void) {
    oled_advance_page(true);
    oled_advance_page(true);
    oled_advance_page(true);
    oled_advance_page(true);
    oled_advance_page(true);
    oled_advance_page(true);

    oled_render_animation();
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

#endif
