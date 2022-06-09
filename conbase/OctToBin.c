#include <stdio.h>
#include <stdlib.h>
#include "conbase.h"

char *OctToBin(const char *octal)
{
    return DecToBin(OctToDec(octal));
}