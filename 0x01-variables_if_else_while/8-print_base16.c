/*
 *Print Hexadecimal numbers
 *8-print_hexa.c minúscula
*/

#include <stdio.h>

/**
 * main -print alphabet oper lower
 *
 * Return: 0
*/

int main(void)
{
/*Declarar variables para letter y num*/
int num = 0;
char letter = 97;
while (num <= 9)
{
putchar((num) + '0');
num++;
}
while (letter <= 102)
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
