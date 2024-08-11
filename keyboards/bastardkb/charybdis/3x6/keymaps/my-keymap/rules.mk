VIA_ENABLE = yes
# MCU configuration
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Set the default keyboard layout
DEFAULT_FOLDER = keymaps/default

# Optimize firmware size
OPT_DEFS += -Os

# Build options
# Comment out lines to disable the feature, or set to `yes` to enable it
RGBLIGHT_ENABLE = yes        # Enable RGB underglow lighting
RGB_MATRIX_ENABLE = no       # Disable RGB matrix lighting (per-key RGB)
MOUSEKEY_ENABLE = yes        # Enable mouse keys
EXTRAKEY_ENABLE = yes        # Enable extra keys (like media controls)
CONSOLE_ENABLE = no          # Disable the debug console
COMMAND_ENABLE = no          # Disable command feature
NKRO_ENABLE = yes            # Enable N-Key Rollover
AUDIO_ENABLE = no            # Disable audio support
MIDI_ENABLE = no             # Disable MIDI support
UNICODE_ENABLE = no          # Disable Unicode support
BLUETOOTH_ENABLE = no        # Disable Bluetooth support
SLEEP_LED_ENABLE = yes        # Disable sleep LED functionality
ENCODER_ENABLE = yes         # Enable rotary encoder support

# Feature options
TAP_DANCE_ENABLE = yes       # Enable Tap Dance feature
LEADER_ENABLE = no           # Disable Leader key functionality
STENO_ENABLE = no            # Disable stenography support
BOOTMAGIC_ENABLE = no        # Disable Bootmagic (useful for debug)
MAGIC_ENABLE = no            # Disable Magic key options (debug)
MOUSEKEY_ENABLE = yes        # Enable mouse keys
SPLIT_KEYBOARD = yes         # Enable split keyboard support
USE_SERIAL = yes             # Use serial communication for split keyboard

# Space optimization
LTO_ENABLE = yes             # Enable Link Time Optimization for reducing firmware size

# Set firmware target size
FIRMWARE_SIZE = 28672

# Optimization flags
OPT_DEFS += -flto
OPT_DEFS += -mmcu=$(MCU)

# Compiler flags for split keyboard
CFLAGS += -DSERIAL_USE_MULTI_TRANSACTION

# Enable custom features
CUSTOM_MATRIX = no           # Disable custom matrix
CUSTOM_DEBOUNCE = no         # Disable custom debounce routine

# Disable some unused features to save space
DISABLE_PRINT = yes          # Disable print and print matrix
DISABLE_DEBUG = yes          # Disable debug print statements
DISABLE_ACTION_LAYER = no    # Keep layer switching functionality
DISABLE_ACTION_TAPPING = no  # Keep tap and hold functionality
DISABLE_ACTION_ONESHOT = no  # Keep one-shot modifiers

