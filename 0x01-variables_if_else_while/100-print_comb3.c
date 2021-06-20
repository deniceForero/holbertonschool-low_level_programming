/*
 *Print the com
 *10-print_comb two numbers
*/
#include <stdio.h>

/**
 * main -print comb two numbers
 *
 * Return: 0
*/

int main(void)
{
/*Declarar variables para num1 y num2*/
for (int num1 = 0; num1 < 10; num1++)
{
for (int num2 = num1; num2 < 10; num2++)
{
putchar((num1) + '0');
putchar((num2) + '0');
if (num1 == 9 && num2 == 9 && num2 != num1)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
