/*
*function print number to 98
*0x02 -functions_nested_loops
*/
#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - prints all natural numbers from n to 98, followed by a new line.
* @n: numero to 98
*/
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
else
{
printf("98");
}
printf("\n");
}
 
