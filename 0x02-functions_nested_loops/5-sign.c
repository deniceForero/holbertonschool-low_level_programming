/*
 *function alphabetx10
 *5-sign.c 0x02-functions_nested_loops
*/
#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: is charter checked.
 *
 * Return: 1 is greater, 0 is zero and -1 is less
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else {
_putchar('0');
return (0);
}
}
