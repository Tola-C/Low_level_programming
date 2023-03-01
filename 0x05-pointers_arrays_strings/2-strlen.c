#include "main.h"

/**
 * _strlen - returns length of string
 * @s: the string we want to find length of
 * Return: Always Success
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
	i = i + 1;
	s++;
	}
	return (i);
}
