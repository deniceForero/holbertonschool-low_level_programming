/*
 *function alphabetx10
 *5_print_sign 0x02-functions_nested_loops
*/
#include "holberton.h"

/**
 * main -print sings
 *
 * Return: 0
*/

int _print_sing(int n)
{
if (n > 0)
{
_putchar('+');
return(1);
}
else if (n < 0)
{
_putchar('-');
return(-1);
}
else {
_putchar('0');
return(0);
}
}
