/*
 *function alphabet
 *1_print alphabet 0x02-functions_nested_loops
*/
#include "holberton.h"

/**
 * main -print alphabet
 *
 * Return: 0
*/

void print_alphabet(void)
{
/* Declarar valor inicial para a*/
int letter = 97;
while (letter <= 122)
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
