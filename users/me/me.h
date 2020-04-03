#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"

#define HSV_LB_CYAN 175, 255, 64
#define HSV_LB_RED  0, 255, 64
#define HSV_LB_GOLDENROD  30, 218, 64
#define HSV_LB_8008_PINK  352, 218, 64

#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_WKL_wrapper(...)              LAYOUT_WKL(__VA_ARGS__)
#define LAYOUT_HHKB_wrapper(...)             LAYOUT_60_hhkb(__VA_ARGS__)

#define _________________QWERTY_L0_________________       _________________FUNC_LEFT_________________
#define _________________QWERTY_L1_________________       ________________NUMBER_LEFT________________
#define _________________QWERTY_L2_________________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L3_________________       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L4_________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R0_________________       _________________FUNC_RIGHT________________ 
#define _________________QWERTY_R1_________________       ________________NUMBER_RIGHT_______________
#define _________________QWERTY_R2_________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R3_________________       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R4_________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH


#define ____________________FN_L0__________________       _______, _______, _______, RGB_TOG, RGB_HUI
#define ____________________FN_L1__________________       ___________________BLANK___________________
#define ____________________FN_L1_60_______________       _________________FUNC_LEFT_________________
#define ____________________FN_L2__________________       _______, _______, _______, RESET,   _______
#define ____________________FN_L3__________________       ___________________BLANK___________________
#define ____________________FN_L4__________________       ___________________BLANK___________________

#define ____________________FN_R0__________________       RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD
#define ____________________FN_R1__________________       ___________________BLANK___________________
#define ____________________FN_R1_60_______________       _________________FUNC_RIGHT________________ 
#define ____________________FN_R2__________________       ___________________BLANK___________________
#define ____________________FN_R3__________________       ___________________BLANK___________________
#define ____________________FN_R4__________________       _______, _______, KC_VOLD, KC_VOLU, KC_MPLY


#define _________________SPACEFN_L0________________       ___________________BLANK___________________
#define _________________SPACEFN_L1________________       ___________________BLANK___________________
#define _________________SPACEFN_L2________________       ___________________BLANK___________________
#define _________________SPACEFN_L3________________       ___________________BLANK___________________
#define _________________SPACEFN_L4________________       ___________________BLANK___________________

#define _________________SPACEFN_R0________________       ___________________BLANK___________________
#define _________________SPACEFN_R1________________       ___________________BLANK___________________
#define _________________SPACEFN_R2________________       KC_INS,  KC_HOME, _______, KC_END,  KC_BSPC
#define _________________SPACEFN_R3________________       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______
#define _________________SPACEFN_R4________________       _______, KC_DEL, _______, _______, _______


#define _________________GAMING_L0_________________       ___________________BLANK___________________
#define _________________GAMING_L1_________________       ___________________BLANK___________________
#define _________________GAMING_L2_________________       ___________________BLANK___________________
#define _________________GAMING_L3_________________       ___________________BLANK___________________
#define _________________GAMING_L4_________________       ___________________BLANK___________________

#define _________________GAMING_R0_________________       ___________________BLANK___________________
#define _________________GAMING_R1_________________       ___________________BLANK___________________
#define _________________GAMING_R2_________________       ___________________BLANK___________________
#define _________________GAMING_R3_________________       ___________________BLANK___________________
#define _________________GAMING_R4_________________       ___________________BLANK___________________


#define ________________NUMBER_LEFT________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define _________________FUNC_LEFT_________________       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define ___________________BLANK___________________       _______, _______, _______, _______, _______

#endif
