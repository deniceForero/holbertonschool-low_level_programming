/*
 *function num absolute
 *6_print_absolutenum 0x02-functions_nested_loops
*/
#include "holberton.h"

/**
 * _abs -print num absolute
 *
 * @num: number to be checked.
 *
 * Return: absolute value of an integer.
*/

int _abs(int num)
{
if (num >= 0)
return (num);
else
return (-num);
}
