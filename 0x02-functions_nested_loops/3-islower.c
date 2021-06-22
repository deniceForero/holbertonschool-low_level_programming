/*
 *function alphabetx10
 *2_print_alphabetx10 0x02-functions_nested_loops
*/
#include "holberton.h"

/**
 * _islower -print lowercase
 *
 * print alpabeth in lowercase
*/

int _islower(int c)
{
if(c >= 'a' && c <= 'z')
return(0);
else
return(1);
}

