/*
 *Print the number
 *9-print_commas
*/
#include <stdio.h>

/**
 * main -print The Last Digit
 *
 * Return: 0
 */

int main(void)
{
/*Declarar variables para num*/
int num = 0;
while (num <= 9)
{
putchar((num) + '0');
num++;
if (num == 10)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
