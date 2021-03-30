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

// What is HAL? https://www.chibios.org/dokuwiki/doku.php?id=chibios:products:hal:start.
// For option details: see http://chibios.sourceforge.net/docs3/hal/halconf_8h_source.html.

#pragma once

#define HAL_USE_I2C TRUE

#define HAL_USE_PWM TRUE

#define HAL_USE_SPI TRUE

#include_next <halconf.h>
