/*
 *function isalpha
 *4_print_alpha 0x02-functions_nested_loops
*/
#include "holberton.h"

/**
 * _isalpha - is a letter, lowercase or uppercase
 *
 * Return: 1 is a letter, lowercase or uppercase, 0 otherwise
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
else
return (0);
}
