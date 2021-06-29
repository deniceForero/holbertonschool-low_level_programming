/*
 *function swap
 *1-swap.c 0x05-pointers_arrays_strings
*/
#include "holberton.h"

/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: value for number one
 * @b: value for number two
*/

void swap_int(int *a, int *b)
{
int tem = *a;
*a = *b;
*b = tem;
}

