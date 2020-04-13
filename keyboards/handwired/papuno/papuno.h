#pragma once

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
    #include <avr/io.h>
    #include <avr/interrupt.h>
#endif
#endif

#ifdef KEYBOARD_handwired_papuno_right
    #include "right.h"
#elif KEYBOARD_handwired_papuno_left
    #include "left.h"
#endif

#include "quantum.h"

#define LAYOUT( \
    LA1, LA2, LA3, LA4, LA5, LA6,           RA1, RA2, RA3, RA4, RA5, RA6, \
    LB1, LB2, LB3, LB4, LB5, LB6,           RB1, RB2, RB3, RB4, RB5, RB6, \
    LC1, LC2, LC3, LC4, LC5, LC6,           RC1, RC2, RC3, RC4, RC5, RC6, \
    LD1, LD2, LD3, LD4, LD5, LD6,           RD1, RD2, RD3, RD4, RD5, RD6, \
         LE2, LE3, LE4, LE5, LE6,           RE1, RE2, RE3, RE4, RE5, \
                        LF5, LF6,           RF1, RF2 \
    ) \
    { \
        { LA1, LA2, LA3, LA4, LA5, LA6 }, \
        { LB1, LB2, LB3, LB4, LB5, LB6 }, \
        { LC1, LC2, LC3, LC4, LC5, LC6 }, \
        { LD1, LD2, LD3, LD4, LD5, LD6 }, \
        { KC_NO, LE2, LE3, LE4, LE5, LE6 }, \
        { KC_NO, KC_NO, KC_NO, KC_NO, LF5, LF6 }, \
        { RA1, RA2, RA3, RA4, RA5, RA6 }, \
        { RB1, RB2, RB3, RB4, RB5, RB6 }, \
        { RC1, RC2, RC3, RC4, RC5, RC6 }, \
        { RD1, RD2, RD3, RD4, RD5, RD6 }, \
        { RE1, RE2, RE3, RE4, RE5, KC_NO }, \
        { RF1, RF2, KC_NO, KC_NO, KC_NO, KC_NO } \
    }

#define LAYOUT_kc( \
    LA1, LA2, LA3, LA4, LA5, LA6,           RA1, RA2, RA3, RA4, RA5, RA6, \
    LB1, LB2, LB3, LB4, LB5, LB6,           RB1, RB2, RB3, RB4, RB5, RB6, \
    LC1, LC2, LC3, LC4, LC5, LC6,           RC1, RC2, RC3, RC4, RC5, RC6, \
    LD1, LD2, LD3, LD4, LD5, LD6,           RD1, RD2, RD3, RD4, RD5, RD6, \
         LE2, LE3, LE4, LE5, LE6,           RE1, RE2, RE3, RE4, RE5, \
                        LF5, LF6,           RF1, RF2 \
    ) \
    LAYOUT( \
        KC_##LA1, KC_##LA2, KC_##LA3, KC_##LA4, KC_##LA5, KC_##LA6,                     KC_##RA1, KC_##RA2, KC_##RA3, KC_##RA4, KC_##RA5, KC_##RA6, \
        KC_##LB1, KC_##LB2, KC_##LB3, KC_##LB4, KC_##LB5, KC_##LB6,                     KC_##RB1, KC_##RB2, KC_##RB3, KC_##RB4, KC_##RB5, KC_##RB6, \
        KC_##LC1, KC_##LC2, KC_##LC3, KC_##LC4, KC_##LC5, KC_##LC6,                     KC_##RC1, KC_##RC2, KC_##RC3, KC_##RC4, KC_##RC5, KC_##RC6, \
        KC_##LD1, KC_##LD2, KC_##LD3, KC_##LD4, KC_##LD5, KC_##LD6,                     KC_##RD1, KC_##RD2, KC_##RD3, KC_##RD4, KC_##RD5, KC_##RD6, \
                  KC_##LE2, KC_##LE3, KC_##LE4, KC_##LE5, KC_##LE6,                     KC_##RE1, KC_##RE2, KC_##RE3, KC_##RE4, KC_##RE5, \
                                                KC_##LF5, KC_##LF6,                     KC_##RF1, KC_##RF2 \
    )
