/* lv_conf.h - Configurazione base per ESP32 + CYD */

#if 1 /* Abilita il file di configurazione */

#define LV_CONF_INCLUDE_SIMPLE    1

/* Risoluzione schermo */
#define LV_HOR_RES_MAX          320
#define LV_VER_RES_MAX          240

/* Profondità colore */
#define LV_COLOR_DEPTH          16
#define LV_COLOR_16_SWAP        0

/* Supporto buffer */
#define LV_USE_GPU              0
#define LV_USE_LOG              1

/* Tick basato su millis() di Arduino */
#define LV_TICK_CUSTOM          1
#define LV_TICK_CUSTOM_INCLUDE  "Arduino.h"
#define LV_TICK_CUSTOM_SYS_TIME_EXPR (millis())

/* Abilita temi e widget principali */
#define LV_USE_THEME_DEFAULT    1
#define LV_USE_BTN              1
#define LV_USE_LABEL            1
#define LV_USE_IMG              1
#define LV_USE_SLIDER           1
#define LV_USE_SWITCH           1

/* Memoria per il buffer di disegno */
#define LV_MEM_SIZE (48U * 1024U) /* 48 KB */

/* Abilita UTF-8 */
#define LV_TXT_ENC LV_TXT_ENC_UTF8

#endif /* fine lv_conf.h */
/*
#ifndef LV_CONF_H
#define LV_CONF_H

#define LV_COLOR_DEPTH 16
#define LV_COLOR_16_SWAP 0
#define LV_MEM_SIZE (48U * 1024U)
#define LV_USE_PERF_MONITOR 0
#define LV_USE_MEM_MONITOR 0
#define LV_USE_LOG 0
#define LV_FONT_MONTSERRAT_14 1
#define LV_THEME_DEFAULT_DARK 0
#define LV_USE_ASSERT_NULL 0
#define LV_USE_ASSERT_MALLOC 0
#define LV_USE_ASSERT_STYLE 0
#define LV_USE_ASSERT_MEM_INTEGRITY 0
#define LV_USE_ASSERT_OBJ 0

#endif
*/
