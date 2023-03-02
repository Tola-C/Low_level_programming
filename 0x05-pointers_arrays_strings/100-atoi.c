#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string for conversion
 * Return: Always Success
 */
int _atoi(char *s)
{
	int i, x, y, z, length, num;

	i = 0;
	x = 0;
	y = 0;
	z = 0;
	length = 0;
	num = 0;

	while (s[length] != '\0')
	length++;
	while (i < length && z == 0)
	{
	if (s[i] == '-')
	++x;
	if (s[i] >= '0' && s[i] <= '9')
	{
	num = s[i] - '0';
	if (x % 2)
	num = -num;
	y = y * 10 + num;
	z = 1;
	if (s[i + 1] < '0' || s[i + 1] > '9')
	break;
	z = 0;
	}
	i++;
	}
	if (z == 0)
	return (0);
	return (y);
}
