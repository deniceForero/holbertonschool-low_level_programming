/*
 *function alphabetx10
 *2_print_alphabetx10 0x02-functions_nested_loops
*/
#include "holberton.h"

/**
 * main -print alphabetx10
 *
 * Return: 0
*/

void print_alphabet_x10(void)
{
int num = 0;
char caracter;
while(num++ <= 9)
{
for (caracter = 'a'; caracter <= 'z'; caracter++)
_putchar(caracter);
_putchar('\n');
}
}
