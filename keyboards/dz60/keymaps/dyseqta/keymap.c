#include QMK_KEYBOARD_H

enum layer_names {
    BASE,
    NAV_PAD,
    FUNC,
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
        KC_LCTL, KC_LALT, MO(NAV_PAD), KC_SPC, MO(NAV_PAD), KC_RALT, KC_RCTL, KC_LGUI 
    ),
/* Alternate layer with number pad and navigation keys
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │NLK│P 1│P 2│P 3│P 4│P 5│P 6│P 7│P 8│P 9│P 0│P -│P +│ARL│ARR│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │ INS │HOM│ARU│END│PUP│   │   │   │PRS│SLK│PAU│P /│P *│ENTER│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  P │
 * │      │ARL│ARD│ARR│PDN│   │   │   │   │   │   │   │   │    │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┤
 * │ SHIFT  │   │   │   │   │   │   │   │   │P .│P /│ SHFT │MNU│
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬┴───┤
 * │LCTL│LALT│    │                        │    │RALT│RCTL│FN 2│
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
    [NAV_PAD] = LAYOUT_60_iso_split_bs_split_rshift(
        KC_NLCK, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8, KC_P9, KC_P0, KC_PMNS, KC_PPLS, KC_LEFT, KC_RIGHT,
        KC_INS, KC_HOME, KC_UP, KC_END, KC_PGUP, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR, KC_SLCK, KC_PAUS, KC_PSLS, KC_PAST,
        XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PENT,
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PDOT, KC_PSLS, KC_RSFT, KC_MENU,
        KC_LCTL, KC_LALT, XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, KC_RCTL, MO(FUNC) 
    ),
/* Alternate layer with navigation and funcion keys
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │   │F 1│F 2│F 3│F 4│F 5│F 6│F 7│F 8│F 9│F10│F11│F12│   │   │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┤
 * │ SHIFT  │   │   │   │   │RGB│   │   │   │   │   │ SHFT │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬┴───┤
 * │LCTL│LALT│    │                        │    │RALT│RCTL│    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
    [FUNC] = LAYOUT_60_iso_split_bs_split_rshift(
        XXXXXXX, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, XXXXXXX,
        KC_LCTL, KC_LALT,XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, KC_RCTL, XXXXXXX 
    ),
};

void keyboard_post_init_user(void) {
    /* Configure LEDs: Backlight used as caps lock indicator and RGB as underglow */
    backlight_level_noeeprom(0); // Set min backlight level
    rgblight_sethsv_noeeprom(8, 255, 255); // Orange (H: 8, S: 255, V: 255)
    rgblight_disable_noeeprom();
}

bool led_update_user(led_t led_state) {
    if(led_state.caps_lock) {
        backlight_level_noeeprom(31); // Set max backlight level
    } else {
        backlight_level_noeeprom(0); // Set min backlight level
    }

    return true;
}