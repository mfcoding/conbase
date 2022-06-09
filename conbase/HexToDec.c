#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long long int HexToDec(const char *hexadecimal)
{
    if(hexadecimal == NULL || !*hexadecimal)
    {
        return 0;
    }
    int len = strlen(hexadecimal)-1;
    unsigned long long int decimal = 0;
    unsigned long long int base = 1;
    int count = 0;
    while (len != EOF)
    {
        if((hexadecimal[len] >= '0' && hexadecimal[len] <= '9') ||
           (hexadecimal[len] >= 'a' && hexadecimal[len] <= 'f') ||
           (hexadecimal[len] >= 'A' && hexadecimal[len] <= 'F') )
        {
            decimal += hexadecimal[len] >= '0' && hexadecimal[len] <= '9' ?  base * (hexadecimal[len] - 48) :
                       hexadecimal[len] >= 'a' && hexadecimal[len] <= 'f' ?  base * (hexadecimal[len] - 87) :
                       hexadecimal[len] >= 'A' && hexadecimal[len] <= 'F' ?  base * (hexadecimal[len] - 55) : 0;
            base *= 16; 
            count++;
        }
        if(count > 16)
        {
            break;
        }
        --len;
    }
    return decimal;
}