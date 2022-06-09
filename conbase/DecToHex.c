#include <stdio.h>
#include <stdlib.h>

char *DecToHex(unsigned long long int decimal)
{
    int count = !decimal ? 1 : 0;
    unsigned long long int dec_copy = decimal;
    while (dec_copy)
    {
        dec_copy /= 16;
        ++count;
    }
    char *octal = (char*) malloc((count+1) * sizeof(char));
    if(octal)
    {
        *(octal+count) = '\0';
        while(count)
        {
            --count;
            *(octal+count) = (decimal % 16);
            *(octal+count) += *(octal+count) < 10 ? 48 : 87;
            decimal /= 16;
        }
    }
    return octal;
}
