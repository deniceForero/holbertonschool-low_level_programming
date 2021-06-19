/*
*Print the numbers
*6-printnumbers.c
*/

#include <stdio.h>

/**
 * main -print The Last Digit
 *
 * Return: 0
*/

int main(void)
{
/*declare variables for number*/
int num = 9;
int aux = 0;
while (aux <= num)
{
putchar(num);
aux++;
}
putchar('\n');
return (0);
}
