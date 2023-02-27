#include "main.h"

/**
 * _isalpha - function checks for upper & lowercase characters
 * @c: is the argument taken in by the function
 * Return: 1 Success
 */

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
	return (0);
}
