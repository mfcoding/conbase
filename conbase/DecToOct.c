#include <stdio.h>
#include <stdlib.h>

char *DecToOct(unsigned long long int decimal)
{
    int count = !decimal ? 1 : 0;
    unsigned long long int dec_copy = decimal;
    while (dec_copy)
    {
        dec_copy /= 8;
        ++count;
    }
    char *octal = (char*) malloc((count+1) * sizeof(char));
    if(octal)
    {
        *(octal+count) = '\0';
        while(count)
        {
            --count;
            *(octal+count) = (decimal % 8) + 48;
            decimal /= 8;
        }
    }
    return octal;
}
