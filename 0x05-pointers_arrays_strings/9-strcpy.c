#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @src: source of copy
 * @dest: destination
 * Return: Always success
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int m;

	i = 0;
	m = 0;

	while (*(src + i) != '\0')
	{
	i++;
	}
	for (; m < i; m++)
	{
	dest[m] = src[m];
	}
	dest[i] = '\0';
	return (dest);
}
