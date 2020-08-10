# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = atmel-dfu

# Build Options
#   comment out to disable the options.
#
BLUETOOTH_ENABLE = no 	# Bluetooth functionality
BOOTMAGIC_ENABLE = lite	# Enter bootloader with a single key only (ESC)
MOUSEKEY_ENABLE = no	# Mouse keys(+4700)
EXTRAKEY_ENABLE = yes	# Audio control and System control(+450)
CONSOLE_ENABLE = no		# Console for debug(+400)
COMMAND_ENABLE = no		# Commands for debug and configuration
SLEEP_LED_ENABLE = no	# Breathing sleep LED during USB suspend
NKRO_ENABLE = yes		# USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE = no	# Enable per-key backlight LEDs
AUDIO_ENABLE = no		# There is no speaker on this PCB
FAUXCLICKY_ENABLE = no 	# Use audio device to create fake clicking sounds
MIDI_ENABLE = no 		# MIDI Device functionality
RGBLIGHT_ENABLE = yes	# Enable the RGB underglow LEDs
UNICODE_ENABLE = yes	# Allow output of unicode code points directly
HD44780_ENABLE = no 	# LCD character display functionality
# TAP_DANCE_ENABLE = yes	# Multi-tap keys for alternate keycodes

LAYOUTS = iso_enter_split_bs_split_rshift
