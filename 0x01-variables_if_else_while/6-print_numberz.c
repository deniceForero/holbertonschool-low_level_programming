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
int num = 0;
while (num <= 9)
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
