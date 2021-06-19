/*
 *print the numbers base 10
 *5-print_numbers
*/

#include <stdio.h>

/**
* main -print numbers
*
* Return: 0
*/

int main(void)
{
/*Declarar variables para numero */
int numero = 9;
int aux = 0;
while (aux <= numero)
{
printf("%d", aux);
aux++;
}
printf("\n");
return (0);
}
