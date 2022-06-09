#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long long int BinToDec(const char *binary)
{
    if(binary == NULL || !*binary)
    {
        return 0;
    }
    int len = strlen(binary)-1;
    unsigned long long int decimal = 0;
    unsigned long long int base = 1;
    int count = 0;
    while (len != EOF)
    {
        if(binary[len] == '0' || binary[len] == '1')
        {
            decimal += base * (binary[len] - 48);
            base *= 2; 
            count++;
        }
        if(count > 64)
        {
            break;
        }
        --len;
    }
    return decimal;
}