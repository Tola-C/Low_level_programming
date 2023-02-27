#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lowercase
 *
 * Description: print lowercase letters and new line afterwards
 *
 * Return: Always 0.
 */

void print_alphabet(void)

{
	char n;

	for (n = 'a'; n <= 'z'; ++n)
	{
	_putchar(n);
	}
	_putchar('\n');
}
