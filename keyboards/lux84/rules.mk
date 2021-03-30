# MCU name
MCU = STM32F072
BOARD = GENERIC_STM32_F072XB

# RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = IS31FL3733	# Enable RGB Matrix

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = lite     # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
# CONSOLE_ENABLE = yes        # Console for debug
# COMMAND_ENABLE = yes        # Commands for debug and configuration
# # Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# # if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
# BLUETOOTH_ENABLE = no       # No bluetooth on the MCU
# AUDIO_ENABLE = no           # No audio on the MCU


# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
