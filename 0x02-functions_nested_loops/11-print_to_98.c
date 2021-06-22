/*
 *function print_to_98.c
 *0x02 -functions_nested_loops
*/
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 *
 * @n: numero >= 98
*/

void print_to_98(int n)
{
if (n >= 98)
while (n >= 98)
{
printf("%d, ", n--);
}
else
{
while (n <= 98)
printf("%d, ", n++);
}
}
