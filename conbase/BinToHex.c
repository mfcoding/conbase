#include <stdio.h>
#include <stdlib.h>
#include "conbase.h"

char *BinToHex(const char *binary)
{
    return DecToHex(BinToDec(binary));
}