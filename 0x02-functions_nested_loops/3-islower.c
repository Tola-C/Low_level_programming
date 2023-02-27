#include "main.h"

/**
 * _islower - function checks for lowercase characters
 * @c: is the argument taken in by the function
 * Return: 1 Success
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	return (0);
}
