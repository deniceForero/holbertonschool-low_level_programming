/*
 *Print the Alphabet
 *3-print_alphabet.c mayúscula y minúscula
 */

#include <stdio.h>

/**
 * main -print alphabet oper lower
 *
 * Return: 0
 */

int main(void)
{
/*Declarar variables para a y A*/
int caracter = 97;
int caracterM = 65;
while (caracter <= 122)
{
putchar(caracter);
caracter++;
}
while (caracterM <= 90)
{
putchar(caracterM);
caracterM++;
}
putchar('\n');
return (0);
}
