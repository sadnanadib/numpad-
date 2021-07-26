#pragma once

#include "quantum.h"

/* LAYOUT_horizontal
 * │K00│K01│K02│
 * ├───┼───┼───┤
 * │K03│K04│K05│
 * └───┴───┴───┘
 */
#define LAYOUT_horizontal( \
	     K01, K02, K03, K04, \
	     K11, K12, K13, K14, \
	K20, K21, K22, K23,      \
	K30, K31, K32, K33, K34, \
	K40, K41, K42, K43,      \
	K50,      K52, K53, K54  \
) { \
	{ KC_NO, K01,   K02,   K03,   K04 }, \
	{ KC_NO, K11,   K12,   K13,   K14 }, \
	{ K20,   K21,   K22,   K23,   KC_NO }, \
	{ K30,   K31,   K32,   K33,   K34 }, \
	{ K40,   K41,   K42,   K43,   KC_NO }, \
	{ K50,   KC_NO, K52,   K53,   K54 } \
}

#define LAYOUT LAYOUT_horizontal
