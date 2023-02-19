/* Copyright 2021 Enrique Cabrer
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

#include "65p.h"

bool encoder_update_user(uint8_t index, bool clockwise) {
    
//    if (index == 0) { /* First encoder */
//        if (clockwise) {
//            tap_code(KC__VOLUP);
//        } else {
//            tap_code(KC__VOLDOWN);
//        }
//    } else if (index == 1) { /* Second encoder */
//        if (clockwise) {
//            tap_code(KC_DOWN);
//        } else {
//            tap_code(KC_UP);
//        }
//    }
    return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {



//	  switch (keycode) {
//	    case KC_0:
//	          rgblight_sethsv_range(0, 0, 200, 0, 5);
//	      return true; // Skip all further processing of this key
//	    case KC_1:
//	          rgblight_sethsv_range(0, 255, 200, 0, 5);
//	      return true; // Let QMK send the enter press/release events
//	    case KC_2:
//	          rgblight_sethsv_range(201, 255, 200, 0, 5);
//	      return true; // Let QMK send the enter press/release eve
//	    case KC_6:
//	          rgblight_sethsv_range(169, 255, 200, 0, 5);
//	      return true; // Let QMK send the enter press/release events
//	    case KC_7:
//	          rgblight_sethsv_range(127, 255, 200, 0, 5);
//	      return true; // Let QMK send the enter press/release events
//	    case KC_8:
//	          rgblight_sethsv_range(85, 255, 200, 0, 5);
//	      return true; // Let QMK send the enter press/release events
//	    default:
//	      return true; // Process all other keycodes normally
//	  }

    

    return true; // Process all other keycodes normally
}
