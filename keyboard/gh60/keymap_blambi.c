#include "keymap_common.h"

/*
  Poker inspired mode with ISO layout
*/

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        FN0,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT, NUHS, ENT, \
        LSFT, NUBS, Z,   X,   C,   V,   B,   N,   M,   COMM, DOT, SLSH, NO, RSFT, \
        LCTL,LGUI,LALT,          SPC,                   NO, RALT, RGUI,APP, RCTL),
    /* 1: With Arrows */
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,RIGHT,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, TRNS, \
        TRNS,TRNS,TRNS,          TRNS,              TRNS, TRNS,TRNS,TRNS,TRNS),
    /* 2: Without Esc */
    KEYMAP(
        GRV, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS),
    /* 3: Blambi's Fn
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12| Del   |
     * |-----------------------------------------------------------|
     * |     |FnQ|   |   |   |   |   |   |Up |   |   |Hom|Ins|     |
     * |-------------------------------------------------------.   |
     * |      |Psc|Slk|Pau|   |   |   |Lef|Dow|Rig|   |End|    |   |
     * |-----------------------------------------------------------|
     * |    |   |   |   |Web|Mut|VoU|VoD|   |PgU|PgD|Del|          |
     * |-----------------------------------------------------------|
     * |    |    |    |         FnS            |    |    |    |    |
     * `-----------------------------------------------------------'
     * Fn:  to Fn overlay
     * FnL: to Layout selector overaly
     * FnQ: toggle Esc overlay
     * FnS: toggle Arrow overlay
     */
    KEYMAP(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, \
        TRNS,FN2, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, UP,TRNS,TRNS,HOME,INS, TRNS,  \
        TRNS,PSCR,SLCK,PAUS,TRNS,TRNS,TRNS,LEFT, DOWN, RIGHT,TRNS, END,TRNS, TRNS, \
        TRNS,TRNS,TRNS,TRNS,WHOM,MUTE,VOLU,VOLD,TRNS,PGUP,PGDN,DEL,TRNS, TRNS, \
        TRNS,TRNS,TRNS,          FN1,               TRNS, TRNS,TRNS,TRNS,TRNS),
};
const action_t PROGMEM fn_actions[] = {
    /* Poker based Layout */
    [0] = ACTION_LAYER_MOMENTARY(3),  // to Fn overlay
    [1] = ACTION_LAYER_TOGGLE(1),     // toggle arrow overlay
    [2] = ACTION_LAYER_TOGGLE(2),     // toggle Esc overlay
    //[3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
};
