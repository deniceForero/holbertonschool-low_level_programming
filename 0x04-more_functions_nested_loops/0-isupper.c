/*
 *function upper
 *0-isupper.c 0x04-more_functions_nested_loops
*/
#include "holberton.h"

/**
 * _isupper - checks for uppercase character.
 * 
 * @c: character to look 
 * 
 * Return: 1 is upper or 0 otherwise
*/

int _isupper(int c)
{
if(c >= 'A' && c <= 'Z')
return(1);
else
return(0);
}

