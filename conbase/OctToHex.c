#include <stdio.h>
#include <stdlib.h>
#include "conbase.h"

char *OctToHex(const char *octal)
{
    return DecToHex(OctToDec(octal));
}