#include "main.h"

/**
 * _puts - prints a string, then new line to stdout
 * @str: string for printing
 * Retrurn: Always Success
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
