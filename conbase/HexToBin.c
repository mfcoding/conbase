#include <stdio.h>
#include <stdlib.h>
#include "conbase.h"

char *HexToBin(const char *hexdecimal)
{
    return DecToBin(HexToDec(hexdecimal)); 
}