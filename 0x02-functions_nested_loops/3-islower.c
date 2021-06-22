/*
 *function alphabetx10
 *3_print_lowercase 0x02-functions_nested_loops
*/
#include "holberton.h"

/**
 * _islower - print lowercase
 *
 * @c: charter checked.
 * 
 * Return: 1 is character is lowercase, 0 otherwise.
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

