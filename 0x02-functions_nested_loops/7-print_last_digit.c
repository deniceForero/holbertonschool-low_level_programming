/*
 *function last Digit
 *7_print_lasdigit 0x02-functions_nested_loops
*/
#include "holberton.h"

/**
 * print_last_digit -print last digit
 *
 * @n: charter to be checked.
 *
 * Return: last digit of a number
*/

int print_last_digit(int n)
{
int last_digit = n % 10;
putchar((last_digit) + '0');
return (0);
}
