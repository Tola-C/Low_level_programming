#include "main.h"

/**
 * reverse_array - reverses content of array
 * @a: array name
 * @n: number of elements
 * Return: Always success
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
	j = a[i];
	a[i] = a[n];
	a[n] = j;
	}
}
