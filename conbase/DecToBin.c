#include <stdio.h>
#include <stdlib.h>
#include "conbase.h"

char *DecToBin(unsigned long long int decimal)
{
    int count = !decimal ? 1 : 0;
    unsigned long long int dec_copy = decimal;
    while (dec_copy)
    {
        dec_copy /= 2;
        ++count;
    }
    char *binary = (char*) malloc((count+1) * sizeof(char));
    if(binary)
    {
        *(binary+count) = '\0';
        while(count)
        {
            --count;
            *(binary+count) = (decimal % 2) + 48;
            decimal /= 2;
        }
    }
    return binary;
}
