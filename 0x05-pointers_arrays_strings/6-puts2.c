#include "main.h"

/**
 * puts2 -prints every other character of a string begining with 1st
 * @s: string whose characters are printed
 * Return: Always Success
 */

void puts2(char *s)
{
	int i;
	int j;
	int n;
	char *x = s;

	i = 0;
	j = 0;

	while (*x != '\0')
	{
	x++;
	i++;
	}
	j = i - 1;
	for (n = 0; n <= j; n++)
	{
	if (n % 2 == 0)
	{
	_putchar(s[n]);
	}
	}
	_putchar('\n');
}
