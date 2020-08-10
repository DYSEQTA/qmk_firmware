#include QMK_KEYBOARD_H

enum layer_names {
  BASE,
  FUN_PAD,
  FUN_NAV,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Basic QWERTY layout
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │ESC│ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │BKS│DEL│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │ TAB │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ { │ } │ENTER│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │ CAPS │ A │ S │ D │ F │ G │ H │ J │ K │ L │ : │ " │ | │    │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┤
 * │ SHIFT  │ Z │ X │ C │ V │ B │ N │ M │ < │ > │ ? │ SHFT │ ~ │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬┴───┤
 * │LCTL│LALT│ FN │         SPACE          │ FN │RALT│RCTL│LGUI│
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
  [BASE] = LAYOUT_60_iso_split_bs_split_rshift(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_DEL,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,
    KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_GRV,
    KC_LCTL, KC_LALT, MO(FUN_NAV), KC_SPC, MO(FUN_NAV), KC_RALT, KC_RCTL, KC_LGUI 
  ),
/* Numpad layout
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │NLK│P 1│P 2│P 3│P 4│P 5│P 6│P 7│P 8│P 9│P 0│P -│P +│P /│P *│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │ENTER│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  P │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┤
 * │ SHIFT  │   │   │   │   │   │   │   │   │P .│P /│ SHFT │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬┴───┤
 * │LCTL│LALT│    │                        │    │RALT│RCTL│    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
  [FUN_PAD] = LAYOUT_60_iso_split_bs_split_rshift(
    KC_NLCK, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8, KC_P9, KC_P0, KC_PMNS, KC_PPLS, KC_PSLS, KC_PAST,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PENT,
    KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PDOT, KC_PSLS, KC_RSFT, XXXXXXX,
    KC_LCTL, KC_LALT, XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, KC_RCTL, XXXXXXX 
  ),
/* Alternate layer with navigation and funcion keys
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │ ~ │F 1│F 2│F 3│F 4│F 5│F 6│F 7│F 8│F 9│F10│F11│F12│ARL│ARR│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │     │HOM│ARU│END│PUP│   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ARL│ARD│ARR│PDN│   │ARL│ARD│ARU│ARR│   │   │   │    │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┤
 * │ SHIFT  │   │   │   │   │RGB│   │   │   │   │   │ SHFT │ESC│
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬┴───┤
 * │LCTL│LALT│ FN │                        │ FN │RALT│RCTL│FN P│
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
  [FUN_NAV] = LAYOUT_60_iso_split_bs_split_rshift(
    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_LEFT, KC_RIGHT,
    XXXXXXX, KC_HOME, KC_UP, KC_END, KC_PGUP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, BL_BRTG, RGB_TOG, BL_TOGG, BL_ON, BL_OFF, BL_INC, BL_DEC, KC_RSFT, KC_ESC,
    KC_LCTL, KC_LALT,XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, KC_RCTL, MO(FUN_PAD) 
  ),
};

// // All orange (H: 8, S: 255, V: 255) layer for capslock indication
// const rgblight_segment_t PROGMEM rgb_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//   {0, 16, 8, 255, 255}  // Light all 16 LEDs starting at LED 0
// );

// // Now define the array of layers. Later layers take precedence
// const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
//   rgb_capslock_layer
// );

void keyboard_post_init_user(void)
{
  // Enable the LED layers
  //rgblight_layers = rgb_layers;
  rgblight_sethsv_noeeprom(8, 255, 255);
  rgblight_disable_noeeprom();
}

bool led_update_user(led_t led_state)
{
  //rgblight_set_layer_state(0, led_state.caps_lock);
  if(led_state.caps_lock)
  {
    backlight_enable();
  }
  else
  {
    backlight_disable();
  }

  return true;
}