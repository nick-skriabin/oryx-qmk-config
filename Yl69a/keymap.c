#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  MAC_LOCK,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           LT(4, KC_E),    KC_R,           KC_T,                                           KC_Y,           KC_U,           LT(4, KC_I),    KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, LT(3, KC_A),    MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),LT(3, KC_SCLN), KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RGUI, KC_SLASH),KC_TRANSPARENT, 
                                                    LT(2, KC_SPACE),LT(1, KC_TAB),                                  LT(1, KC_ENTER),LT(2, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          LGUI(KC_SPACE), KC_NO,                                          KC_NO,          KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,          
    KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_NO,          
    KC_NO,          KC_LEFT_GUI,    KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_1,           KC_2,           KC_3,           KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     KC_NO,                                          KC_NO,          LGUI(KC_LBRC),  LGUI(KC_RBRC),  KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          ST_MACRO_4,     KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          KC_LEFT_GUI,    ST_MACRO_5,     KC_NO,          ST_MACRO_6,     KC_NO,                                          KC_NO,          LGUI(LSFT(KC_4)),LGUI(LSFT(KC_5)),KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_PIPE,        KC_PLUS,        KC_AMPR,        KC_MINUS,       KC_NO,                                          KC_NO,          KC_LBRC,        KC_RBRC,        KC_BSLS,        KC_AT,          KC_NO,          
    KC_NO,          KC_EXLM,        KC_LABK,        KC_EQUAL,       KC_RABK,        KC_NO,                                          KC_NO,          KC_LPRN,        KC_RPRN,        KC_HASH,        KC_GRAVE,       KC_NO,          
    KC_NO,          KC_ASTR,        KC_PERC,        KC_DLR,         KC_CIRC,        KC_NO,                                          KC_NO,          KC_LCBR,        KC_RCBR,        KC_SLASH,       KC_TILD,        KC_NO,          
                                                    KC_LEFT_ALT,    KC_LEFT_GUI,                                    KC_RIGHT_GUI,   KC_RIGHT_ALT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,RGB_MODE_FORWARD,RGB_TOG,        KC_NO,                                          KC_NO,          KC_F19,         KC_TRANSPARENT, KC_F20,         KC_F6,          KC_NO,          
    KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,                                          KC_NO,          KC_F16,         KC_F17,         KC_F18,         KC_F5,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          MAC_LOCK,       KC_NO,                                          KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_NO,          
                                                    KC_LEFT_CTRL,   KC_LEFT_GUI,                                    KC_RIGHT_GUI,   KC_RIGHT_CTRL
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_LALT, KC_S), MT(MOD_LCTL, KC_D), COMBO_END};
const uint16_t PROGMEM combo2[] = { MT(MOD_RSFT, KC_J), MT(MOD_RCTL, KC_K), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_U, LT(4, KC_I), COMBO_END};
const uint16_t PROGMEM combo4[] = { LT(4, KC_I), KC_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
    COMBO(combo1, CW_TOGG),
    COMBO(combo2, KC_QUOTE),
    COMBO(combo3, KC_LBRC),
    COMBO(combo4, KC_RBRC),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3, KC_A):
            return TAPPING_TERM + 20;
        case MT(MOD_LALT, KC_S):
            return TAPPING_TERM + 20;
        case MT(MOD_LCTL, KC_D):
            return TAPPING_TERM + 20;
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM + 20;
        case MT(MOD_RSFT, KC_J):
            return TAPPING_TERM + 20;
        case MT(MOD_RCTL, KC_K):
            return TAPPING_TERM + 20;
        case MT(MOD_RALT, KC_L):
            return TAPPING_TERM + 20;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {80,218,204}, {80,218,204}, {80,218,204}, {0,0,0}, {0,0,0}, {80,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {171,224,181}, {171,224,181}, {171,224,181}, {171,224,181}, {0,0,0}, {0,0,0}, {171,224,181}, {171,224,181}, {171,224,181}, {171,224,181}, {0,0,0}, {0,0,0}, {171,224,181}, {171,224,181}, {171,224,181}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {0,0,0}, {0,0,0}, {197,218,204}, {70,218,204}, {70,218,204}, {70,218,204}, {0,0,0}, {0,0,0}, {70,218,204}, {197,218,204}, {0,0,0}, {197,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {171,224,181}, {171,224,181}, {171,224,181}, {171,224,181}, {0,0,0}, {0,0,0}, {0,0,0}, {171,224,181}, {171,224,181}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {0,0,0}, {0,0,0}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {0,0,0}, {0,0,0}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {0,0,0}, {23,242,223}, {23,242,223}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {0,0,0}, {0,0,0}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {0,0,0}, {0,0,0}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {0,0,0}, {23,242,223}, {23,242,223} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {171,224,181}, {171,224,181}, {171,224,181}, {171,224,181}, {0,0,0}, {0,0,0}, {171,224,181}, {171,224,181}, {171,224,181}, {171,224,181}, {0,0,0}, {0,0,0}, {171,224,181}, {171,224,181}, {171,224,181}, {171,224,181}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_T))SS_DELAY(100)  SS_TAP(X_V));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_T))SS_DELAY(100)  SS_TAP(X_B));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_T))SS_DELAY(100)  SS_TAP(X_LBRC));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_T))SS_DELAY(100)  SS_LSFT(SS_TAP(X_F)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_T))SS_DELAY(100)  SS_TAP(X_M));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_T))SS_DELAY(100)  SS_TAP(X_SCLN));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_T))SS_DELAY(100)  SS_TAP(X_J));
    }
    break;
    case MAC_LOCK:
      HCS(0x19E);

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


