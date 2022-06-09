#ifndef CONBASE_H
#define CONBASE_H
 
/* Return a malloc'd string holding the binary equivalent of decimal. */
char *DecToBin(unsigned long long int decimal);

/* Return a malloc'd string holding the octal equivalent of decimal. */
char *DecToOct(unsigned long long int decimal);

/* Return a malloc'd string holding the hexadecimal equivalent of decimal. */
char *DecToHex(unsigned long long int decimal);

/* Return the decimal equivalent of binary. */
unsigned long long int BinToDec(const char *binary); 

/* Return the decimal equivalent of octal. */
unsigned long long int OctToDec(const char *octal);

/* Return the decimal equivalent of hexadecimal. */
unsigned long long int HexToDec(const char *hexadecimal);

/* Return a malloc'd string holding the octal equivalent of binary. */
char *BinToOct(const char *binary);

/* Return a malloc'd string holding the hexadecimal equivalent of binary. */
char *BinToHex(const char *binary);

/* Return a malloc'd string holding the binary equivalent of octal. */
char *OctToBin(const char *octal);

/* Return a malloc'd string holding the hexadecimal equivalent of octal. */
char *OctToHex(const char *octal);

/* Return a malloc'd string holding the binary equivalent of hexadecimal. */
char *HexToBin(const char *hexdecimal);

/* Return a malloc'd string holding the octal equivalent of hexadecimal. */
char *HexToOct(const char *hexdecimal);

#endif
