/*
 *function alphabetx10
 *5_print_sign 0x02-functions_nested_loops
*/
#include "holberton.h"

/**
 * print_sing - prints the sign of a number
 *
 * @n: is charter checked.
 *
 * Return: 1 is greater, 0 is zero and -1 is less
*/

int print_sing(int n)
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
