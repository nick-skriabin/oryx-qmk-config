#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  MAC_LOCK,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_DOWN,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,MAC_LOCK,       
    KC_TILD,        KC_Q,           KC_W,           TD(DANCE_0),    KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_ESCAPE,      TD(DANCE_1),    MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),TD(DANCE_2),    KC_QUOTE,       
    CW_TOGG,        MT(MOD_LGUI, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RGUI, KC_SLASH),CW_TOGG,        
                                                    LT(2,KC_SPACE), LT(1,KC_TAB),                                   LT(1,KC_ENTER), LT(2,KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    RGB_MODE_FORWARD,RGB_TOG,        RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_R)),LGUI(KC_SPACE), KC_TRANSPARENT,                                 KC_LBRC,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_0,        MT(MOD_LCTL, KC_RBRC),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 MT(MOD_LSFT, KC_SCLN),KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_MINUS,       MT(MOD_LCTL, KC_EQUAL),
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_COMMA,       KC_KP_1,        KC_KP_2,        KC_KP_3,        MT(MOD_LSFT, KC_EQUAL),KC_ENTER,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_5,     KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  ST_MACRO_6,                                     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(LSFT(KC_4)),LGUI(LSFT(KC_5)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LSFT, KC_2),MT(MOD_LSFT, KC_EQUAL),KC_MINUS,       MT(MOD_LSFT, KC_7),MT(MOD_LSFT, KC_BSLS),                                MT(MOD_LSFT, KC_2),KC_LBRC,        KC_RBRC,        KC_BSLS,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LSFT, KC_5),MT(MOD_LSFT, KC_COMMA),MT(MOD_LSFT, KC_1),KC_EQUAL,       MT(MOD_LSFT, KC_3),                                KC_GRAVE,       MT(MOD_LSFT, KC_9),MT(MOD_LSFT, KC_0),MT(MOD_LSFT, KC_DOT),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LSFT, KC_MINUS),MT(MOD_LSFT, KC_4),MT(MOD_LSFT, KC_6),MT(MOD_LSFT, KC_8),                                MT(MOD_LSFT, KC_GRAVE),MT(MOD_LSFT, KC_LBRC),MT(MOD_LSFT, KC_RBRC),KC_SLASH,       KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    LGUI(KC_LBRC),  LGUI(KC_RBRC),                                  LGUI(KC_C),     LGUI(KC_V)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F10,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_1):
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


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_Z));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_LBRC));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_LSFT(SS_TAP(X_T)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_N));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_V));
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


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[3];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_E);
        tap_code16(KC_E);
        tap_code16(KC_E);
    }
    if(state->count > 3) {
        tap_code16(KC_E);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_E); break;
        case SINGLE_HOLD: layer_move(4); break;
        case DOUBLE_TAP: register_code16(KC_E); register_code16(KC_E); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_E); register_code16(KC_E);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_E); break;
        case DOUBLE_TAP: unregister_code16(KC_E); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_E); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_A);
        tap_code16(KC_A);
        tap_code16(KC_A);
    }
    if(state->count > 3) {
        tap_code16(KC_A);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_A); break;
        case SINGLE_HOLD: layer_move(3); break;
        case DOUBLE_TAP: register_code16(KC_A); register_code16(KC_A); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_A); register_code16(KC_A);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_A); break;
        case DOUBLE_TAP: unregister_code16(KC_A); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_A); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SCLN);
        tap_code16(KC_SCLN);
        tap_code16(KC_SCLN);
    }
    if(state->count > 3) {
        tap_code16(KC_SCLN);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_SCLN); break;
        case SINGLE_HOLD: layer_move(3); break;
        case DOUBLE_TAP: register_code16(KC_SCLN); register_code16(KC_SCLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SCLN); register_code16(KC_SCLN);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_SCLN); break;
        case DOUBLE_TAP: unregister_code16(KC_SCLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SCLN); break;
    }
    dance_state[2].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};
