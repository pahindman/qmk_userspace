/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

#define LCTL_Z  LCTL_T(KC_Z)
#define RCTL_SL RCTL_T(KC_SLSH)
#define LT1_ESC  LT(1, KC_ESC)

#if defined(KEYBOARD_keychron_c3_pro_ansi_red)
#define C3P_HUI _______
#define C3P_HUD _______
#define C3P_SAI _______
#define C3P_SAD _______
#define C3P_VAI BL_UP
#define C3P_VAD BL_DOWN
#define C3P_SPI _______
#define C3P_SPD _______
#define C3P_TOG BL_TOGG
#define C3P_MOD BL_STEP
#define C3P_RMOD _______
#elif defined(KEYBOARD_keychron_c3_pro_ansi_rgb)
#define C3P_HUI RGB_HUI
#define C3P_HUD RGB_HUD
#define C3P_SAI RGB_SAI
#define C3P_SAD RGB_SAD
#define C3P_VAI RGB_VAI
#define C3P_VAD RGB_VAD
#define C3P_SPI RGB_SPI
#define C3P_SPD RGB_SPD
#define C3P_TOG RGB_TOG
#define C3P_MOD RGB_MOD
#define C3P_RMOD RGB_RMOD
#else
#error "Unknown keyboard"
#endif

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_tkl_ansi(
        KC_ESC,                    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_GRV,          KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,          KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        LT1_ESC,         KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,
        KC_LSFT,                   LCTL_Z,   KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   RCTL_SL,  KC_RSFT,                      KC_UP,
        KC_LCTL,         KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(1),    KC_RWIN,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [1] = LAYOUT_tkl_ansi(
        QK_BOOT,                   KC_BRID,  KC_BRIU,  _______,  _______,  C3P_VAD,  C3P_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  DT_PRNT,  _______,  C3P_TOG,
        EE_CLR,          _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  DT_UP,
        BL_TOGG,         C3P_MOD,  C3P_VAI,  C3P_HUI,  C3P_SAI,  C3P_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  DT_DOWN,
        _______,         C3P_RMOD, C3P_VAD,  C3P_HUD,  C3P_SAD,  C3P_SPD,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,  _______,
        _______,                   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
        _______,         _______,  _______,                                _______,                                DF(2),    _______,  KC_APP,   _______,  _______,  _______,  _______),

    [2] = LAYOUT_tkl_ansi(
        KC_ESC,                    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_GRV,          KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,          KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,         KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,
        KC_LSFT,                   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                      KC_UP,
        KC_LCTL,         KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(3),    KC_RWIN,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [3] = LAYOUT_tkl_ansi(
        _______,                   KC_BRID,  KC_BRIU,  _______,  _______,  C3P_VAD,  C3P_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  C3P_TOG,
        _______,         _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        BL_TOGG,         C3P_MOD,  C3P_VAI,  C3P_HUI,  C3P_SAI,  C3P_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,         C3P_RMOD, C3P_VAD,  C3P_HUD,  C3P_SAD,  C3P_SPD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,                   _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,  _______,                      _______,
        _______,         _______,  _______,                                _______,                                DF(0),    _______,  KC_APP,   _______,  _______,  _______,  _______),
};
