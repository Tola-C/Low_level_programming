#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Description: uses stdlib, and passes betty-doc tests
 * Return: Always success 0
 */

int main(void)
{
	int p[100];
	int i, x, sum;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
	p[i] = rand() % 78;
	sum += (p[i] + '0');
	putchar(p[i] + '0');
	if ((2772 - sum) - '0' < 78)
	{
	x = 2772 - sum - '0';
	sum += x;
	putchar(x + '0');
	break;
	}
	}
	return (0);
}
