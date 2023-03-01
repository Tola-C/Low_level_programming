#include "main.h"

/**
 * puts_half - prints half a a string then a new line
 * @str: string to be printed in half
 * Return: Always Success
 */

void puts_half(char *str)
{
	int a;
	int i;
	int n;

	i = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
	i++;
	}
	n = (i / 2);
	if ((i % 2) == 1)
	{
	n = ((i + 1) / 2);
	}
	for (a = n; str[a] != '\0'; a++)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
