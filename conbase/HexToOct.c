#include <stdio.h>
#include <stdlib.h>
#include "conbase.h"

char *HexToOct(const char *hexdecimal)
{
    return DecToOct(HexToDec(hexdecimal)); 
}