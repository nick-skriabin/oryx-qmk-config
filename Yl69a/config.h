#define FLOW_TAP_TERM 100
#define CHORDAL_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 280

#define RETRO_TAPPING

#define PERMISSIVE_HOLD

#define COMBO_TERM 35

#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 300000

#define USB_SUSPEND_WAKEUP_DELAY 0
#define AUTO_SHIFT_MODIFIERS
#define AUTO_SHIFT_TIMEOUT 140
#define NO_AUTO_SHIFT_TAB
#define NO_AUTO_SHIFT_SPECIAL
#define NO_AUTO_SHIFT_NUMERIC
#define SERIAL_NUMBER "Yl69a/lb5ddz"
#define LAYER_STATE_8BIT
#define COMBO_COUNT 5
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60

