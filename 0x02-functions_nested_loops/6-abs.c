#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @n: the number to test, abs is the absolute value
 * Return: Always 0
 */

int _abs(int n)
{
	int abs;

	if (n < 0)
	{
	abs = n * -1;
	return (abs);
	}
	return (n);
}
