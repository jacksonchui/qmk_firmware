/* Copyright 2021 Jackson Chui (jacksonchui)
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

#include "config_common.h"

/* LSE clock */
#define STM32_LSECLK 32768

/* USB Device descriptor parameter */
#define VENDOR_ID       0x8008 // AT
#define PRODUCT_ID      0x9453 // 84 - Lux
#define DEVICE_VER      0x0001
#define MANUFACTURER    ATBoards
#define PRODUCT         ATBoards Lux84


/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

/* key matrix pins */
#define MATRIX_ROW_PINS { A15, B3, B4, B8, B9, B11 }
#define MATRIX_COL_PINS { B12, B13, B14, B15, A8, A9, B10, B2, B1, B0, A7, A6, A5, A4, A3, A2 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

// This is a 7-bit address, that gets left-shifted and bit 0
// set to 0 for write, 1 for read (as per I2C protocol)
// The address will vary depending on your wiring:
// 00 <-> GND
// 01 <-> SCL
// 10 <-> SDA
// 11 <-> VCC
// ADDR1 represents A1:A0 of the 7-bit address.
// ADDR2 represents A3:A2 of the 7-bit address.
// The result is: 0b101(ADDR2)(ADDR1)
#define DRIVER_ADDR_1 0b1010000
#define DRIVER_ADDR_2 0b1010000 // this is here for compliancy reasons.
IS31FL3733_init(DRIVER_ADDR_2, 0);

#define DRIVER_COUNT 2
#define DRIVER_1_LED_TOTAL 64
#define DRIVER_LED_TOTAL DRIVER_1_LED_TOTAL
