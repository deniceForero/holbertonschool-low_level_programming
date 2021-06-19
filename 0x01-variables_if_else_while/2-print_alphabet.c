/*
 *Print the Alphabet
 *2-print_alphabet.c
 */

#include <stdio.h>

/**
 * main -print The Last Digit
 *
 * Return: 0
 */

int main(void)
{
  /*Declarar variables para a*/
  int caracter = 97;
  while (caracter <= 122)
    {
      putchar(caracter);
      caracter--;
    }
  putchar('\n');
  return (0);
}
