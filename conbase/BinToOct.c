#include <stdio.h>
#include <stdlib.h>
#include "conbase.h"

char *BinToOct(const char *binary)
{
    return DecToOct(BinToDec(binary));
}