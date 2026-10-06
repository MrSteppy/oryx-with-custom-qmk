#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#include "keymap_steno.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

#define DUAL_FUNC_0 LT(11, KC_F22)
#define DUAL_FUNC_1 LT(1, KC_9)
#define DUAL_FUNC_2 LT(5, KC_K)
#define DUAL_FUNC_3 LT(7, KC_F15)
#define DUAL_FUNC_4 LT(15, KC_F12)
#define DUAL_FUNC_5 LT(9, KC_E)
#define DUAL_FUNC_6 LT(5, KC_F13)
#define DUAL_FUNC_7 LT(1, KC_F12)
#define DUAL_FUNC_8 LT(8, KC_Q)
#define DUAL_FUNC_9 LT(2, KC_8)
#define DUAL_FUNC_10 LT(3, KC_F11)
#define DUAL_FUNC_11 LT(10, KC_E)
#define DUAL_FUNC_12 LT(7, KC_F14)
#define DUAL_FUNC_13 LT(7, KC_F8)
#define DUAL_FUNC_14 LT(10, KC_W)
#define DUAL_FUNC_15 LT(9, KC_U)
#define DUAL_FUNC_16 LT(9, KC_I)
#define DUAL_FUNC_17 LT(15, KC_F10)
#define DUAL_FUNC_18 LT(2, KC_Q)
#define DUAL_FUNC_19 LT(12, KC_E)
#define DUAL_FUNC_20 LT(4, KC_0)
#define DUAL_FUNC_21 LT(13, KC_F21)
#define DUAL_FUNC_22 LT(6, KC_F21)
#define DUAL_FUNC_23 LT(12, KC_1)
#define DUAL_FUNC_24 LT(13, KC_F4)
#define DUAL_FUNC_25 LT(1, KC_F16)
#define DUAL_FUNC_26 LT(12, KC_F5)
#define DUAL_FUNC_27 LT(10, KC_F15)
#define DUAL_FUNC_28 LT(7, KC_D)
#define DUAL_FUNC_29 LT(10, KC_F5)
#define DUAL_FUNC_30 LT(8, KC_6)
#define DUAL_FUNC_31 LT(5, KC_1)
#define DUAL_FUNC_32 LT(13, KC_D)
#define DUAL_FUNC_33 LT(6, KC_F2)
#define DUAL_FUNC_34 LT(15, KC_9)
#define DUAL_FUNC_35 LT(5, KC_Q)
#define DUAL_FUNC_36 LT(5, KC_F16)
#define DUAL_FUNC_37 LT(2, KC_F17)
#define DUAL_FUNC_38 LT(12, KC_F3)
#define DUAL_FUNC_39 LT(14, KC_T)
#define DUAL_FUNC_40 LT(7, KC_R)
#define DUAL_FUNC_41 LT(15, KC_H)
#define DUAL_FUNC_42 LT(11, KC_G)
#define DUAL_FUNC_43 LT(15, KC_I)
#define DUAL_FUNC_44 LT(3, KC_K)
#define DUAL_FUNC_45 LT(13, KC_K)
#define DUAL_FUNC_46 LT(7, KC_F1)
#define DUAL_FUNC_47 LT(15, KC_Q)
#define DUAL_FUNC_48 LT(5, KC_0)
#define DUAL_FUNC_49 LT(13, KC_F1)
#define DUAL_FUNC_50 LT(10, KC_F1)
#define DUAL_FUNC_51 LT(10, KC_F9)
#define DUAL_FUNC_52 LT(1, KC_U)
#define DUAL_FUNC_53 LT(4, KC_F2)
#define DUAL_FUNC_54 LT(6, KC_3)
#define DUAL_FUNC_55 LT(3, KC_F8)
#define DUAL_FUNC_56 LT(9, KC_F21)
#define DUAL_FUNC_57 LT(13, KC_F5)
#define DUAL_FUNC_58 LT(6, KC_F5)
#define DUAL_FUNC_59 LT(14, KC_P)
#define DUAL_FUNC_60 LT(12, KC_F21)
#define DUAL_FUNC_61 LT(10, KC_3)
#define DUAL_FUNC_62 LT(15, KC_F24)
#define DUAL_FUNC_63 LT(6, KC_8)
#define DUAL_FUNC_64 LT(10, KC_4)
#define DUAL_FUNC_65 LT(7, KC_F23)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,                                    DUAL_FUNC_16,   DUAL_FUNC_17,   DUAL_FUNC_18,   DUAL_FUNC_19,   DUAL_FUNC_20,   DUAL_FUNC_21,   
    TD(DANCE_0),    DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,                                   KC_J,           KC_L,           DUAL_FUNC_22,   DE_Z,           DUAL_FUNC_23,   DUAL_FUNC_24,   
    MO(5),          DUAL_FUNC_11,   MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_D,                                           DUAL_FUNC_25,   MT(MOD_RSFT, KC_N),MT(MOD_LCTL, KC_E),MT(MOD_LALT, KC_I),DUAL_FUNC_26,   MO(6),          
    KC_ESCAPE,      DE_Y,           DUAL_FUNC_12,   DUAL_FUNC_13,   DUAL_FUNC_14,   KC_B,                                           MT(MOD_RCTL, KC_K),DUAL_FUNC_27,   DUAL_FUNC_28,   DUAL_FUNC_29,   DUAL_FUNC_30,   KC_ESCAPE,      
                                                    KC_MS_BTN1,     DUAL_FUNC_15,                                   KC_BSPC,        LT(7, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, STN_N1,         STN_N2,         STN_N3,         STN_N4,         STN_N5,                                         STN_N6,         STN_N7,         STN_N8,         STN_N9,         STN_NA,         STN_NB,         
    QK_STENO_BOLT,  STN_S1,         STN_TL,         STN_PL,         STN_HL,         STN_ST1,                                        STN_ST3,        STN_FR,         STN_PR,         STN_LR,         STN_TR,         STN_DR,         
    QK_STENO_GEMINI,STN_S2,         STN_KL,         STN_WL,         STN_RL,         STN_ST2,                                        STN_ST4,        STN_RR,         STN_BR,         STN_GR,         STN_SR,         STN_ZR,         
    KC_TRANSPARENT, KC_TRANSPARENT, STN_NC,         STN_RES1,       STN_RES2,       KC_TRANSPARENT,                                 KC_TRANSPARENT, STN_PWR,        STN_FN,         STN_NC,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    DUAL_FUNC_31,   DUAL_FUNC_32,                                   STN_E,          STN_U
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_LEFT_ALT,    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_P,           
    KC_TAB,         KC_BSPC,        KC_Q,           DUAL_FUNC_33,   KC_E,           KC_R,                                           KC_MS_BTN3,     KC_L,           KC_U,           DE_Z,           DE_HASH,        DE_PLUS,        
    MO(5),          KC_LEFT_SHIFT,  KC_A,           KC_W,           KC_D,           KC_F,                                           KC_MS_BTN2,     KC_N,           KC_E,           KC_I,           KC_O,           MO(6),          
    KC_ESCAPE,      KC_LEFT_CTRL,   KC_X,           KC_S,           KC_V,           KC_B,                                           KC_K,           KC_M,           KC_COMMA,       KC_DOT,         DE_MINS,        KC_CAPS,        
                                                    KC_MS_BTN1,     KC_SPACE,                                       KC_BSPC,        MO(7)
  ),
  [4] = LAYOUT_voyager(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          DUAL_FUNC_34,   DUAL_FUNC_35,   DUAL_FUNC_36,   DUAL_FUNC_37,   DUAL_FUNC_38,   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_KP_4,        KC_KP_5,        KC_KP_6,        DUAL_FUNC_39,   DUAL_FUNC_40,   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_KP_1,        KC_KP_2,        KC_KP_3,        DUAL_FUNC_41,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_NUM,         DUAL_FUNC_42,   KC_KP_COMMA,    KC_KP_MINUS,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          DUAL_FUNC_47,   DUAL_FUNC_48,   DUAL_FUNC_49,   DUAL_FUNC_50,   DUAL_FUNC_51,   DE_ACUT,        
    KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_43,   DUAL_FUNC_44,   DUAL_FUNC_45,   LSFT(KC_TAB),                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_F1),    LCTL(KC_F3),    DUAL_FUNC_46,   KC_TRANSPARENT,                                 ST_MACRO_0,     ST_MACRO_1,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_C),     LCTL(KC_V),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_RIGHT_GUI,   KC_RIGHT_ALT
  ),
  [6] = LAYOUT_voyager(
    DUAL_FUNC_52,   DUAL_FUNC_53,   DUAL_FUNC_54,   DUAL_FUNC_55,   DUAL_FUNC_56,   DUAL_FUNC_57,                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_2,     ST_MACRO_3,     KC_TRANSPARENT, LCTL(KC_KP_SLASH),ST_MACRO_4,                                     KC_TRANSPARENT, DUAL_FUNC_59,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_58,   LALT(KC_F3),    ST_MACRO_5,     TD(DANCE_1),    ST_MACRO_6,                                     KC_TRANSPARENT, DUAL_FUNC_60,   KC_TRANSPARENT, LED_LEVEL,      KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_7,     LALT(LCTL(KC_P)),LALT(LCTL(KC_C)),LALT(LSFT(KC_V)),LALT(LCTL(KC_M)),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
                                                    KC_RIGHT_ALT,   KC_TRANSPARENT,                                 KC_TRANSPARENT, TOGGLE_SCROLL
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LGUI(KC_1),     LGUI(KC_2),     LGUI(KC_3),     LGUI(KC_4),     LGUI(KC_5),     KC_PAUSE,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PAGE_UP,     DUAL_FUNC_61,   KC_UP,          DUAL_FUNC_62,   KC_DELETE,      KC_PSCR,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_INSERT,      KC_RIGHT_SHIFT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        DUAL_FUNC_63,   DUAL_FUNC_64,   DUAL_FUNC_65,   KC_TRANSPARENT, KC_RIGHT_CTRL,  
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_3, KC_4, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_LEFT_ALT, KC_1, COMBO_END};
const uint16_t PROGMEM combo5[] = { DUAL_FUNC_17, DUAL_FUNC_18, COMBO_END};
const uint16_t PROGMEM combo6[] = { DUAL_FUNC_18, DUAL_FUNC_19, COMBO_END};
const uint16_t PROGMEM combo7[] = { DUAL_FUNC_12, DUAL_FUNC_13, COMBO_END};
const uint16_t PROGMEM combo8[] = { DUAL_FUNC_14, DUAL_FUNC_13, COMBO_END};
const uint16_t PROGMEM combo9[] = { DUAL_FUNC_12, DUAL_FUNC_14, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_S, KC_V, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_S, KC_X, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_V, KC_X, KC_S, COMBO_END};
const uint16_t PROGMEM combo14[] = { KC_F, KC_SPACE, COMBO_END};
const uint16_t PROGMEM combo15[] = { DUAL_FUNC_29, DUAL_FUNC_27, COMBO_END};
const uint16_t PROGMEM combo16[] = { KC_DOT, KC_M, COMBO_END};
const uint16_t PROGMEM combo17[] = { KC_KP_COMMA, KC_NUM, COMBO_END};
const uint16_t PROGMEM combo18[] = { LCTL(KC_F1), LCTL(KC_F3), COMBO_END};
const uint16_t PROGMEM combo19[] = { DUAL_FUNC_6, DUAL_FUNC_7, COMBO_END};
const uint16_t PROGMEM combo20[] = { DUAL_FUNC_28, DUAL_FUNC_27, COMBO_END};
const uint16_t PROGMEM combo21[] = { DUAL_FUNC_28, DUAL_FUNC_29, COMBO_END};
const uint16_t PROGMEM combo22[] = { DUAL_FUNC_8, DUAL_FUNC_7, COMBO_END};
const uint16_t PROGMEM combo23[] = { KC_X, KC_LEFT_CTRL, COMBO_END};
const uint16_t PROGMEM combo24[] = { KC_Q, KC_E, COMBO_END};
const uint16_t PROGMEM combo25[] = { KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo26[] = { MT(MOD_LSFT, KC_T), MT(MOD_RSFT, KC_N), COMBO_END};
const uint16_t PROGMEM combo27[] = { MT(MOD_LSFT, KC_T), MT(MOD_LCTL, KC_S), MT(MOD_LALT, KC_R), COMBO_END};
const uint16_t PROGMEM combo28[] = { MT(MOD_RSFT, KC_N), MT(MOD_LALT, KC_I), MT(MOD_LCTL, KC_E), COMBO_END};
const uint16_t PROGMEM combo29[] = { KC_D, KC_W, KC_A, COMBO_END};
const uint16_t PROGMEM combo30[] = { DUAL_FUNC_11, DUAL_FUNC_26, COMBO_END};
const uint16_t PROGMEM combo31[] = { DUAL_FUNC_8, DUAL_FUNC_9, COMBO_END};
const uint16_t PROGMEM combo32[] = { DUAL_FUNC_7, DUAL_FUNC_8, DUAL_FUNC_9, COMBO_END};
const uint16_t PROGMEM combo33[] = { DUAL_FUNC_25, KC_D, COMBO_END};
const uint16_t PROGMEM combo34[] = { MT(MOD_RCTL, KC_K), KC_B, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_6),
    COMBO(combo1, KC_7),
    COMBO(combo2, KC_8),
    COMBO(combo3, KC_9),
    COMBO(combo4, KC_0),
    COMBO(combo5, DE_LCBR),
    COMBO(combo6, DE_RCBR),
    COMBO(combo7, DE_LESS),
    COMBO(combo8, DE_MORE),
    COMBO(combo9, DE_PIPE),
    COMBO(combo10, KC_M),
    COMBO(combo11, KC_L),
    COMBO(combo12, KC_J),
    COMBO(combo13, KC_H),
    COMBO(combo14, KC_G),
    COMBO(combo15, TT(4)),
    COMBO(combo16, OSL(4)),
    COMBO(combo17, TO(0)),
    COMBO(combo18, LCTL(KC_F2)),
    COMBO(combo19, DE_AT),
    COMBO(combo20, DE_EQL),
    COMBO(combo21, DE_QST),
    COMBO(combo22, DE_SS),
    COMBO(combo23, DE_Y),
    COMBO(combo24, KC_C),
    COMBO(combo25, KC_T),
    COMBO(combo26, KC_ENTER),
    COMBO(combo27, KC_LEFT_GUI),
    COMBO(combo28, KC_LEFT_GUI),
    COMBO(combo29, KC_LEFT_GUI),
    COMBO(combo30, KC_CAPS),
    COMBO(combo31, LALT(KC_TAB)),
    COMBO(combo32, LALT(LCTL(KC_TAB))),
    COMBO(combo33, LALT(KC_SPACE)),
    COMBO(combo34, ST_MACRO_8),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DE_Y:
            return TAPPING_TERM -30;
        default:
            return TAPPING_TERM;
    }
}

bool numlock_active = false;

bool led_update_user(led_t led_state) {
  numlock_active = led_state.num_lock;
  return true;
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {199,186,123}, {199,183,86}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {139,231,187}, {139,230,146}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {199,183,86}, {199,186,123} },

    [1] = { {0,0,255}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {199,186,123}, {199,183,86}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {199,183,86}, {199,186,123} },

    [2] = { {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {199,186,123}, {199,183,86}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,231,187}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {139,230,146}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {154,255,171}, {199,183,86}, {199,186,123} },

    [3] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {74,255,255}, {74,255,255}, {86,255,255}, {172,255,255}, {192,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {43,255,255}, {43,255,255}, {41,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {86,255,255}, {86,255,255}, {74,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {192,255,255}, {172,255,255} },

    [4] = { {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {86,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {86,255,255}, {0,255,255}, {20,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {86,255,96}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {142,235,102}, {142,235,102}, {20,255,255}, {20,255,255}, {20,255,255}, {142,235,102}, {129,230,73}, {129,230,73}, {129,230,73}, {129,230,73}, {129,230,73}, {129,230,73}, {150,255,85}, {150,255,85}, {150,255,85}, {150,255,85}, {150,255,85}, {150,255,85}, {196,154,61}, {198,183,43}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,255,96}, {142,235,102}, {142,235,102}, {142,235,102}, {142,235,102}, {142,235,102}, {142,235,102}, {129,230,73}, {129,230,73}, {129,230,73}, {129,230,73}, {129,230,73}, {129,230,73}, {150,255,85}, {150,255,85}, {150,255,85}, {150,255,85}, {150,255,85}, {150,255,85}, {198,183,43}, {196,154,61} },

    [6] = { {86,255,96}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {86,253,192}, {142,235,102}, {142,235,102}, {142,235,102}, {129,230,73}, {129,230,73}, {142,235,102}, {129,230,73}, {129,230,73}, {142,235,102}, {129,230,73}, {142,235,102}, {129,230,73}, {150,255,85}, {150,255,85}, {150,255,85}, {150,255,85}, {150,255,85}, {150,255,85}, {196,154,61}, {198,183,43}, {86,255,96}, {86,255,96}, {86,255,96}, {86,255,96}, {86,255,96}, {86,255,96}, {142,235,102}, {142,235,102}, {142,235,102}, {142,235,102}, {142,235,102}, {142,235,102}, {129,230,73}, {150,255,85}, {129,230,73}, {129,230,73}, {129,230,73}, {129,230,73}, {150,255,85}, {129,230,73}, {150,255,85}, {150,255,85}, {150,255,85}, {0,255,136}, {198,183,43}, {196,154,61} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {139,231,187}, {86,255,255}, {86,255,136}, {0,0,255}, {86,255,136}, {0,255,136}, {139,231,187}, {86,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {86,255,255}, {86,255,136}, {20,255,255}, {199,186,123}, {0,0,0}, {199,186,123}, {0,0,0}, {86,255,136}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  if (numlock_active && biton32(layer_state) == 4) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 0, 255, 255 });
    rgb_matrix_set_color( 45, rgb.r, rgb.g, rgb.b );
  } 
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
    }
    if(state->count > 3) {
        tap_code16(KC_TAB);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_TAB); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_TAB)); break;
        case DOUBLE_TAP: register_code16(KC_TAB); register_code16(KC_TAB); break;
        case DOUBLE_HOLD: register_code16(LGUI(LSFT(KC_RIGHT))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_TAB); register_code16(KC_TAB);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_TAB); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_TAB)); break;
        case DOUBLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(LSFT(KC_RIGHT))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_TAB); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_T)));
        tap_code16(LALT(LCTL(KC_T)));
        tap_code16(LALT(LCTL(KC_T)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_T)));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_T))); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_T))); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_F4))); break;
        case DOUBLE_HOLD: register_code16(LALT(KC_F12)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_T))); register_code16(LALT(LCTL(KC_T)));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_T))); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_T))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_F4))); break;
        case DOUBLE_HOLD: unregister_code16(LALT(KC_F12)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_T))); break;
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RIGHT_GUI)SS_DELAY(100)  SS_TAP(X_NUBS)SS_DELAY(100)  SS_TAP(X_3));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RIGHT_GUI)SS_DELAY(50)  SS_TAP(X_N)SS_DELAY(50)  SS_TAP(X_O)SS_DELAY(50)  SS_TAP(X_T)SS_DELAY(50)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(50)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(50)  SS_TAP(X_Q)SS_DELAY(50)  SS_LSFT(SS_TAP(X_1))  SS_DELAY(50) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(50)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(50)  SS_TAP(X_W)SS_DELAY(50)  SS_TAP(X_Q)  SS_DELAY(50) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(50)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(50)  SS_LSFT(SS_TAP(X_1)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A))SS_DELAY(100)  SS_TAP(X_ESCAPE));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A))SS_DELAY(100)  SS_LCTL(SS_TAP(X_D)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_2))SS_DELAY(50)  SS_TAP(X_RBRC)SS_DELAY(50)  SS_TAP(X_Z)  SS_DELAY(50) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_CTRL)SS_DELAY(100)  SS_TAP(X_LEFT_CTRL));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_CIRC);
        } else {
          unregister_code16(DE_CIRC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_RING);
        } else {
          unregister_code16(DE_RING);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_EXLM);
        } else {
          unregister_code16(DE_EXLM);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_DQOT);
        } else {
          unregister_code16(DE_DQOT);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_PARA);
        } else {
          unregister_code16(DE_PARA);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_DLR);
        } else {
          unregister_code16(DE_DLR);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_PERC);
        } else {
          unregister_code16(DE_PERC);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_Q);
        } else {
          unregister_code16(KC_Q);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_Q));
        } else {
          unregister_code16(LCTL(KC_Q));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_W);
        } else {
          unregister_code16(KC_W);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_W));
        } else {
          unregister_code16(LCTL(KC_W));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F);
        } else {
          unregister_code16(KC_F);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_ENTER));
        } else {
          unregister_code16(LSFT(KC_ENTER));
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_P);
        } else {
          unregister_code16(KC_P);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MS_BTN2);
        } else {
          unregister_code16(KC_MS_BTN2);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_G);
        } else {
          unregister_code16(KC_G);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MS_BTN3);
        } else {
          unregister_code16(KC_MS_BTN3);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_A);
        } else {
          unregister_code16(KC_A);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_AE);
        } else {
          unregister_code16(DE_AE);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_X);
        } else {
          unregister_code16(KC_X);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_DELETE);
        } else {
          unregister_code16(KC_DELETE);
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_C);
        } else {
          unregister_code16(KC_C);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_C));
        } else {
          unregister_code16(LCTL(KC_C));
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_V);
        } else {
          unregister_code16(KC_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_V));
        } else {
          unregister_code16(LCTL(KC_V));
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          layer_move(3);
        } else {
          layer_move(3);
        }
      } else {
        if (record->event.pressed) {
          layer_move(1);
        } else {
          layer_move(1);
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_AMPR);
        } else {
          unregister_code16(DE_AMPR);
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_SLSH);
        } else {
          unregister_code16(DE_SLSH);
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_LPRN);
        } else {
          unregister_code16(DE_LPRN);
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_RPRN);
        } else {
          unregister_code16(DE_RPRN);
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_LBRC);
        } else {
          unregister_code16(DE_LBRC);
        }  
      }  
      return false;
    case DUAL_FUNC_21:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_GRV);
        } else {
          unregister_code16(DE_GRV);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_RBRC);
        } else {
          unregister_code16(DE_RBRC);
        }  
      }  
      return false;
    case DUAL_FUNC_22:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_U);
        } else {
          unregister_code16(KC_U);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_UE);
        } else {
          unregister_code16(DE_UE);
        }  
      }  
      return false;
    case DUAL_FUNC_23:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_QUOT);
        } else {
          unregister_code16(DE_QUOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_HASH);
        } else {
          unregister_code16(DE_HASH);
        }  
      }  
      return false;
    case DUAL_FUNC_24:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_PLUS);
        } else {
          unregister_code16(DE_PLUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_ASTR);
        } else {
          unregister_code16(DE_ASTR);
        }  
      }  
      return false;
    case DUAL_FUNC_25:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_H);
        } else {
          unregister_code16(KC_H);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_TILD);
        } else {
          unregister_code16(DE_TILD);
        }  
      }  
      return false;
    case DUAL_FUNC_26:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_O);
        } else {
          unregister_code16(KC_O);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_OE);
        } else {
          unregister_code16(DE_OE);
        }  
      }  
      return false;
    case DUAL_FUNC_27:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_M);
        } else {
          unregister_code16(KC_M);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_BSLS);
        } else {
          unregister_code16(DE_BSLS);
        }  
      }  
      return false;
    case DUAL_FUNC_28:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_SCLN);
        } else {
          unregister_code16(DE_SCLN);
        }  
      }  
      return false;
    case DUAL_FUNC_29:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_COLN);
        } else {
          unregister_code16(DE_COLN);
        }  
      }  
      return false;
    case DUAL_FUNC_30:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DE_MINS);
        } else {
          unregister_code16(DE_MINS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(DE_UNDS);
        } else {
          unregister_code16(DE_UNDS);
        }  
      }  
      return false;
    case DUAL_FUNC_31:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(STN_A);
        } else {
          unregister_code16(STN_A);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MS_BTN1);
        } else {
          unregister_code16(KC_MS_BTN1);
        }  
      }  
      return false;
    case DUAL_FUNC_32:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(STN_O);
        } else {
          unregister_code16(STN_O);
        }
      } else {
        if (record->event.pressed) {
          layer_move(0);
        } else {
          layer_move(0);
        }  
      }  
      return false;
    case DUAL_FUNC_33:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          layer_move(0);
        } else {
          layer_move(0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_ENTER);
        } else {
          unregister_code16(KC_ENTER);
        }  
      }  
      return false;
    case DUAL_FUNC_34:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_7);
        } else {
          unregister_code16(KC_KP_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F7);
        } else {
          unregister_code16(KC_F7);
        }  
      }  
      return false;
    case DUAL_FUNC_35:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_8);
        } else {
          unregister_code16(KC_KP_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }  
      }  
      return false;
    case DUAL_FUNC_36:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_9);
        } else {
          unregister_code16(KC_KP_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }  
      }  
      return false;
    case DUAL_FUNC_37:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_EQUAL);
        } else {
          unregister_code16(KC_KP_EQUAL);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
        }  
      }  
      return false;
    case DUAL_FUNC_38:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_SLASH);
        } else {
          unregister_code16(KC_KP_SLASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F11);
        } else {
          unregister_code16(KC_F11);
        }  
      }  
      return false;
    case DUAL_FUNC_39:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_ENTER);
        } else {
          unregister_code16(KC_KP_ENTER);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PSCR);
        } else {
          unregister_code16(KC_PSCR);
        }  
      }  
      return false;
    case DUAL_FUNC_40:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_ASTERISK);
        } else {
          unregister_code16(KC_KP_ASTERISK);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F12);
        } else {
          unregister_code16(KC_F12);
        }  
      }  
      return false;
    case DUAL_FUNC_41:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_PLUS);
        } else {
          unregister_code16(KC_KP_PLUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PAUSE);
        } else {
          unregister_code16(KC_PAUSE);
        }  
      }  
      return false;
    case DUAL_FUNC_42:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_KP_0);
        } else {
          unregister_code16(KC_KP_0);
        }
      } else {
        if (record->event.pressed) {
          layer_move(3);
        } else {
          layer_move(3);
        }  
      }  
      return false;
    case DUAL_FUNC_43:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_AUDIO_VOL_DOWN);
        } else {
          unregister_code16(KC_AUDIO_VOL_DOWN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MEDIA_PREV_TRACK);
        } else {
          unregister_code16(KC_MEDIA_PREV_TRACK);
        }  
      }  
      return false;
    case DUAL_FUNC_44:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MEDIA_PLAY_PAUSE);
        } else {
          unregister_code16(KC_MEDIA_PLAY_PAUSE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_AUDIO_MUTE);
        } else {
          unregister_code16(KC_AUDIO_MUTE);
        }  
      }  
      return false;
    case DUAL_FUNC_45:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_AUDIO_VOL_UP);
        } else {
          unregister_code16(KC_AUDIO_VOL_UP);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MEDIA_NEXT_TRACK);
        } else {
          unregister_code16(KC_MEDIA_NEXT_TRACK);
        }  
      }  
      return false;
    case DUAL_FUNC_46:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F20);
        } else {
          unregister_code16(KC_F20);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F20));
        } else {
          unregister_code16(LSFT(KC_F20));
        }  
      }  
      return false;
    case DUAL_FUNC_47:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F6);
        } else {
          unregister_code16(KC_F6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F6));
        } else {
          unregister_code16(LSFT(KC_F6));
        }  
      }  
      return false;
    case DUAL_FUNC_48:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F7);
        } else {
          unregister_code16(KC_F7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F7));
        } else {
          unregister_code16(LSFT(KC_F7));
        }  
      }  
      return false;
    case DUAL_FUNC_49:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F8));
        } else {
          unregister_code16(LSFT(KC_F8));
        }  
      }  
      return false;
    case DUAL_FUNC_50:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F9));
        } else {
          unregister_code16(LSFT(KC_F9));
        }  
      }  
      return false;
    case DUAL_FUNC_51:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F10));
        } else {
          unregister_code16(LSFT(KC_F10));
        }  
      }  
      return false;
    case DUAL_FUNC_52:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_LEFT)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_LEFT)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_RIGHT)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_RIGHT)))));
        }  
      }  
      return false;
    case DUAL_FUNC_53:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F1);
        } else {
          unregister_code16(KC_F1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F1));
        } else {
          unregister_code16(LSFT(KC_F1));
        }  
      }  
      return false;
    case DUAL_FUNC_54:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F2);
        } else {
          unregister_code16(KC_F2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F2));
        } else {
          unregister_code16(LSFT(KC_F2));
        }  
      }  
      return false;
    case DUAL_FUNC_55:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F3));
        } else {
          unregister_code16(LSFT(KC_F3));
        }  
      }  
      return false;
    case DUAL_FUNC_56:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F4));
        } else {
          unregister_code16(LSFT(KC_F4));
        }  
      }  
      return false;
    case DUAL_FUNC_57:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F5));
        } else {
          unregister_code16(LSFT(KC_F5));
        }  
      }  
      return false;
    case DUAL_FUNC_58:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_W));
        } else {
          unregister_code16(LCTL(KC_W));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_F4));
        } else {
          unregister_code16(LALT(KC_F4));
        }  
      }  
      return false;
    case DUAL_FUNC_59:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_SYSTEM_SLEEP);
        } else {
          unregister_code16(KC_SYSTEM_SLEEP);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_L));
        } else {
          unregister_code16(LGUI(KC_L));
        }  
      }  
      return false;
    case DUAL_FUNC_60:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F20);
        } else {
          unregister_code16(KC_F20);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PAUSE);
        } else {
          unregister_code16(KC_PAUSE);
        }  
      }  
      return false;
    case DUAL_FUNC_61:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_HOME);
        } else {
          unregister_code16(KC_HOME);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_HOME));
        } else {
          unregister_code16(LSFT(KC_HOME));
        }  
      }  
      return false;
    case DUAL_FUNC_62:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_END);
        } else {
          unregister_code16(KC_END);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_END));
        } else {
          unregister_code16(LSFT(KC_END));
        }  
      }  
      return false;
    case DUAL_FUNC_63:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_LEFT));
        } else {
          unregister_code16(LALT(KC_LEFT));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LCTL(KC_LEFT)));
        } else {
          unregister_code16(LALT(LCTL(KC_LEFT)));
        }  
      }  
      return false;
    case DUAL_FUNC_64:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_PGDN));
        } else {
          unregister_code16(LGUI(KC_PGDN));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_PAGE_UP));
        } else {
          unregister_code16(LGUI(KC_PAGE_UP));
        }  
      }  
      return false;
    case DUAL_FUNC_65:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_RIGHT));
        } else {
          unregister_code16(LALT(KC_RIGHT));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LCTL(KC_RIGHT)));
        } else {
          unregister_code16(LALT(LCTL(KC_RIGHT)));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
