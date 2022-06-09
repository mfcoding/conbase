#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conbase.h"

int main()
{
    //Example
    printf("%s", "Enter positive decimal number: ");
    unsigned long long int decimal;
    scanf("%llu", &decimal); 
    char *binary = DecToBin(decimal);
    if(binary)
    {
        printf("The binary equivalent is \033[1;33m%s\033[0m\n", binary); 
        free(binary);
    }
    else
    {
        puts("Memory allocation failed"); 
    } 
    
    puts("\n");
    
    //Example
    printf("%s\n", HexToOct("0xff"));
    
    return 0;
}
