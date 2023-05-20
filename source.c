#include QMK_KEYBOARD_H

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_esc[]  = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_spc[]  = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM combo_tab[]  = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo_ent[]  = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM combo_bspc[] = {KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM combo_del[]  = {KC_Y, KC_QUOT, COMBO_END};
const uint16_t PROGMEM combo_cwt[]  = {KC_C, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo_cfg[]  = {KC_SPC, KC_BSPC, COMBO_END};

enum combo_events {
  COMBO_ESC,
  COMBO_SPC,
  COMBO_TAB,
  COMBO_ENT,
  COMBO_BSPC,
  COMBO_DEL,
  COMBO_CWT,
  COMBO_CFG
};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_ESC]  = COMBO(combo_esc,LT(3,KC_ESC)),
  [COMBO_SPC]  = COMBO(combo_spc,LT(1,KC_SPC)),
  [COMBO_TAB]  = COMBO(combo_tab,LT(2,KC_TAB)),
  [COMBO_ENT]  = COMBO(combo_ent,LT(5,KC_ENT)),
  [COMBO_BSPC] = COMBO(combo_bspc,LT(4,KC_SPC)),
  [COMBO_DEL]  = COMBO(combo_del,LT(6,KC_DEL)),
  [COMBO_CWT]  = COMBO(combo_cwt, CW_TOGG),
  [COMBO_CFG]  = COMBO(combo_cfg, OSL(7)),
};
#endif