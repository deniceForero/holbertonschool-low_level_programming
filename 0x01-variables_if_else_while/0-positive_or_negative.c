/*
*positive o negative
*punto 0 0-positive_or_negative
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print whit function if
* Return: 0
*/

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
printf("is positive %d\n", n);
if (n<0)
printf("is negative %d\n", n);
else if (n=0)
printf("is cero %d\n", n);
return (0);
}
