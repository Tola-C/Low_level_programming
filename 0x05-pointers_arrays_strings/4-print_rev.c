#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string for printing
 * Return: Always Success
 */

void print_rev(char *s)
{
	int i = 0;
	int x;

	while (*s != '\0')
	{
	i++;
	s++;
	}
	s--;
	for (x = i; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
