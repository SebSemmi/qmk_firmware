# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = full		# Virtual DIP switch configuration
MOUSEKEY_ENABLE = no		# Mouse keys
EXTRAKEY_ENABLE = yes		# Audio control and System control
CONSOLE_ENABLE = no			# Console for debug
COMMAND_ENABLE = no    		# Commands for debug and configuration
SLEEP_LED_ENABLE = no  		# Breathing sleep LED during USB suspend
NKRO_ENABLE = no			# USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE = no  		# Enable keyboard backlight functionality
AUDIO_ENABLE = no			# Audio output
RGBLIGHT_ENABLE = yes		# Enable keyboard RGB underglow
APPLE_FN_ENABLE = yes		# Enable Apple FN-Key

LAYOUTS = 75_iso
