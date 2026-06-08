#include "stdint.h"

typedef struct _station {
    wchar_t name[64];
    char name_py[128];
    char name_en[128];
    uint16_t num;
    uint8_t line[6];
}_Station;

uint16_t alongSataions[];