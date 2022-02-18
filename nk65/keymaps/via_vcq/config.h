/* USB Polling Rate to 1000hz and have bigger keyscan */
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12

/* All animations */
#define RGBLIGHT_ANIMATIONS

/* Disable key locking */
#ifdef LOCKING_SUPPORT_ENABLE
#    undef LOCKING_SUPPORT_ENABLE
#endif
#ifdef LOCKING_RESYNC_ENABLE
#    undef LOCKING_RESYNC_ENABLE
#endif

/* Remove all old style macros */
#define NO_ACTION_FUNCTION
#define NO_ACTION_MACRO
#define NO_ACTION_ONESHOT