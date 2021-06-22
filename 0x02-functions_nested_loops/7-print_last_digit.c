/*
 *function last Digit
 *7_print_lasdigit 0x02-functions_nested_loops
*/
#include "holberton.h"

/**
 * main -print last digit
 *
 * Return: 0
*/

int _int print_last_digit(int n)
{
int last_digit = n % 10;
putchar(last_digit + '0');
return(0);
}
