/*
Copyright 2018 Jumail Mundekkat / MxBlue

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

#define _QWERTY 0
#define _FN 1
#define _SPACEFN 2
#define _GAMING 3
#define _BLANK 4

#define SPCFN LT(_SPACEFN, KC_SPACE)
#define KC_XXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
      KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,     KC_F11,     KC_F12,                  KC_PSCR, TG(_GAMING), KC_PAUS,
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,    KC_EQL,     KC_BSPC,  KC_BSPC,       KC_INS,  KC_HOME, KC_PGUP,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,    KC_RBRC,    KC_BSLS,                 KC_DEL,  KC_END,  KC_PGDN,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,
           KC_LSFT    , KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,    KC_RSFT,    _______,                          KC_UP,
      KC_LCTL, KC_LGUI, KC_LALT,                   SPCFN ,                                      KC_RGUI,  KC_RALT,    KC_MENU,    LT(_FN, KC_RCTL),        KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_FN] = LAYOUT(
      _______,          _______, _______, _______, RGB_TOG, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______,           _______, KC_SLCK, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, KC_MPLY, _______, KC_VOLU,
      _______, _______, _______, _______, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______,           KC_MPRV, KC_MNXT, KC_VOLD,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,
           _______    , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                    _______,
      _______, _______, _______,                   _______,                                     _______, _______, _______, _______,           _______, _______, _______
    ),
    [_SPACEFN] = LAYOUT(
      _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,
           _______    , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                    _______,
      _______, _______, _______,                   _______,                                     _______, _______, _______, _______,           _______, _______, _______
    ),
    [_GAMING] = LAYOUT(
      _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,
           _______    , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                    _______,
      _______, _______, _______,                   KC_SPC,                                      _______, _______, _______, _______,           _______, _______, _______
    ),
    [_BLANK] = LAYOUT(
      _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,
           _______    , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                    _______,
      _______, _______, _______,                   _______,                                     _______, _______, _______, _______,           _______, _______, _______
    )
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {
  #ifdef RGBLIGHT_ENABLE

  static uint8_t old_layer = 255;
  uint8_t new_layer = biton32(layer_state);

  if (old_layer != new_layer) {
    switch (new_layer) {
      case _QWERTY:
        rgblight_sethsv(HSV_CYAN);
        break;
      case _GAMING:
        rgblight_setrgb(HSV_RED);
        break;
    }

    old_layer = new_layer;
  }

  #endif //RGBLIGHT_ENABLE
}
