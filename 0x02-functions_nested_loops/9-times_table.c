/*
 *function print table
 *9-times_table.c
*/
#include "holberton.h"

/**
 * times_table - print  all table 9.
*/

void times_table(void)
{
int y, x, z;
for (y = 0; y <= 9; y++ )
{
for (x = 0; x <= 9; x++ )
{
z = y * x ;
if (x != 0)
{
_putchar(',');
_putchar(' ');
}
if (z >= 10)
{
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
else if
((z < 10) && (x != 0))
{
_putchar(' ');
_putchar((z % 10) + '0');
}
else
_putchar((z % 10) + '0');
}
_putchar('\n');
}
}
 
