/*
*Print the last digit
*7-print_tebahpla.c 
*/

#include <stdio.h>
/**
* main -print The Last Digit
* return: 0
*/
int main(void)
{
int caracter = 122;

while (caracter >=97)
{
putchar(caracter);
caracter--;
}
putchar('\n');
return (0);
}
