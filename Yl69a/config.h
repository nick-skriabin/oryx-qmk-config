#define FLOW_TAP_TERM 100
#define CHORDAL_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 280

#define PERMISSIVE_HOLD

#define COMBO_TERM 35

#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 300000

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "Yl69a/v64DRb"
#define LAYER_STATE_8BIT
#define COMBO_COUNT 5
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60

// #define RETRO_SHIFT 1000
