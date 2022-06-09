#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long long int OctToDec(const char *octal)
{
    if(octal == NULL || !*octal)
    {
        return 0;
    }
    int len = strlen(octal)-1;
    unsigned long long int decimal = 0;
    unsigned long long int base = 1;
    int count = 0;
    while (len != EOF)
    {
        if(octal[len] >= '0' && octal[len] < '8')
        {
            decimal += base * (octal[len] - 48);
            base *= 8; 
            count++;
        }
        if(count > 22)
        {
            break;
        }
        --len;
    }
    return decimal;
}