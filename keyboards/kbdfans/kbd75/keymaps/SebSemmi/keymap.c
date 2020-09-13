#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* ISO 75% layout by SebSemmi (ISO German macOS keyboard layout shown)
 * 
 * ┌───────────────────────────────────────────────────────────────────────────────────────────────┐
 * │ ESC | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 | HME | END | PWR │
 * ├───────────────────────────────────────────────────────────────────────────────────────────────┤
 * │ ^ ° | 1 ! | 2 " | 3 § | 4 $ | 5 % | 6 & | 7 / | 8 ( | 9 ) | 0 = | ß ? | ´ ` | BACKSPACE | DEL │
 * ├───────────────────────────────────────────────────────────────────────────────────────────────┤
 * │  TAB  |  Q  |  W  |  E  |  R  |  T  |  Z  |  U  |  I  |  O  |  P  |  Ü  |  *  |         | PGU │
 * ├────────────────────────────────────────────────────────────────────────────────┤ ENTER  ├─────┤
 * │  CAPS  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  Ö  |  Ä  |  #  |        | PGD │
 * ├───────────────────────────────────────────────────────────────────────────────────────────────┤
 * │ SHIFT | < > |  Y  |  X  |  C  |  V  |  B  |  N  |  M  | , ; | . : | - _ |  SHIFT  | A_U | LYR │
 * ├───────────────────────────────────────────────────────────────────────────────────────────────┤
 * │ CTL | OPT | CMD |                  SPACE                  | CMD | OPT | AFN | A_L | A_D | A_R │
 * └───────────────────────────────────────────────────────────────────────────────────────────────┘
*/

	[0] = LAYOUT_75_iso(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_HOME, KC_END, KC_PWR, 
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_DEL, 
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_PGUP, 
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT, KC_PGDN, 
        KC_LSFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, MO(1), 
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_RGUI, KC_RALT, KC_APFN, KC_LEFT, KC_DOWN, KC_RGHT),
	[1] = LAYOUT_75_iso(
        RGB_TOG, RGB_MOD, RGB_RMOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WAKE, KC_SLEP, KC_PWR, 
        KC_NO, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_NO, KC_TRNS, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
