/* Copyright 2019 ShadeDream
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


#define _QWERTY 0
#define _FN 1
#define _SPACEFN 2
#define _BLANK 3

#define SPCFN LT(_SPACEFN, KC_SPACE)
#define KC_XXXXX KC_NO


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_ansi(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_VOLU,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_VOLD,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,            KC_UP, KC_MPLY,
    KC_LCTL, KC_LGUI, KC_LALT,                       SPCFN,                         KC_LALT, MO(1),            KC_LEFT,  KC_DOWN, KC_RGHT
  ),
  [_FN] = LAYOUT_ansi(
    KC_GRV,  KC_F1,   KC_F2,     KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS,                         KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [_SPACEFN] = LAYOUT_ansi(
     KC_TILD, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,
    KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,  KC_HOME, KC_XXXXX,   KC_END,  KC_BSPC, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,
    KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,  KC_LEFT,  KC_DOWN,    KC_UP, KC_RIGHT, KC_XXXXX, KC_XXXXX, KC_XXXXX,           KC_XXXXX,
     KC_TRNS, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,   KC_DEL, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,           KC_XXXXX,
     KC_TRNS, KC_XXXXX, KC_XXXXX,                               KC_XXXXX,                     KC_XXXXX, KC_XXXXX,           KC_XXXXX, KC_XXXXX, KC_XXXXX
  ),
  [_BLANK] = LAYOUT_ansi(
    KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,
    KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,
    KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,           KC_XXXXX,
    KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,           KC_XXXXX, KC_XXXXX,
    KC_XXXXX, KC_XXXXX, KC_XXXXX,                               KC_XXXXX,                     KC_XXXXX, KC_XXXXX,           KC_XXXXX, KC_XXXXX, KC_XXXXX
  ),

};
