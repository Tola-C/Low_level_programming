#include "main.h"

/**
 * print_alphabet_x10 - function prints 10 times the alphabet in lowercase
 *
 * Description: print lowercase letters and new line afterwards
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)

{
	char i, n;

	for (i = '0'; i <= '9'; ++i)
	{
	for (n = 'a'; n <= 'z'; ++n)
	{
	_putchar(n);
	}
	_putchar('\n');
	}
}
