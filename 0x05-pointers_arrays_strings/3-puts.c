#include "main.h"

/**
 * _puts - prints a string, then new line to stdout
 * @str: string for printing
 * Retrurn: Always Success
 */
int _putchar(char c);

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
