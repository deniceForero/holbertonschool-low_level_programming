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
int num = 0;
int div, mod, aux;
while (num < 100)
{
div = num / 10;
mod = num % 10;
aux = mod * 10 + div;
if (num != aux && num < aux)
{
putchar((num / 10) + '0');
putchar((num % 10) + '0');
if (num != 89)
{
putchar(',');
putchar(' ');
}
}
num++;
}
putchar('\n');
return (0);
}
