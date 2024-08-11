/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6464
#define DEVICE_VER      0x0002
#define MANUFACTURER    Stradichenko
#define PRODUCT         Charybdis 3x6

/* key matrix size */
#define MATRIX_ROWS 8  // 4 rows * 2 sides
#define MATRIX_COLS 6  // 6 columns

// wiring of each half
#define MATRIX_ROW_PINS { D1, D0, D4, C6 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3 }

// wiring for the second half
#define MATRIX_ROW_PINS_RIGHT { D1, D0, D4, C6 }
#define MATRIX_COL_PINS_RIGHT { F4, F5, F6, F7, B1, B3 }

#define DIODE_DIRECTION COL2ROW

/* Set RGB LED configuration */
#define RGB_DI_PIN B2
#ifdef RGB_DI_PIN
    #define RGBLED_NUM 12
    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 8
    #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
    #define RGBLIGHT_SLEEP  // If defined, the RGB lighting will be switched off when the host goes to sleep
    #define RGBLIGHT_ANIMATIONS
#endif

/* Enable mouse keys and encoder support */
#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_DELAY          0
#define MOUSEKEY_TIME_TO_MAX    10
#define MOUSEKEY_MAX_SPEED      7
#define MOUSEKEY_WHEEL_DELAY    0

#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 }
#define ENCODER_RESOLUTION 4

/* Set the debounce time to 5 ms */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Set the tapping term (default: 200ms) */
#define TAPPING_TERM 200

/* Set to 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

/* Split keyboard specific options */
#define USE_SERIAL
#define SOFT_SERIAL_PIN D2
#define MASTER_LEFT

// If you have underglow LEDs on both halves, use the following to synchronize them:
#define RGBLIGHT_SPLIT
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

/* EEPROM usage */
#define EECONFIG_LEGACY_KEYMAP

/* Define NKRO (N-Key Rollover) by default */
#define FORCE_NKRO

