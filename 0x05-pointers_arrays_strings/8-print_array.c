#include "main.h"

/**
 * print_array -prints out n elements of array a
 * @n: number of elements in the array
 * @a: name of the array
 * Return: Always success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
	printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
