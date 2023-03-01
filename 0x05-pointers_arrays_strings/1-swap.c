#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: one integer
 * @b: is the second integer and n is interim storage
 * Return: Always success 0
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
