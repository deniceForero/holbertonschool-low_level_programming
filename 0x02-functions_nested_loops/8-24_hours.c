/*
 *function 23:59
 *8_print_hours and minutes
*/
#include "holberton.h"

/**
 * jack_bauer -hours and minutes
 *
 * 23:59
*/

void jack_bauer(void)
{
int hora;
int min;
for (hora = 0; hora <= 23; hora++)
{
for (min = 0; min <= 59; min++)
{
_putchar((hora / 10) + '0');
_putchar((hora % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
}
}
}
