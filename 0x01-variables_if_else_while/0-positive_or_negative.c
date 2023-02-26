#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Pick a random number and indicate if it's +ve, -ve or zero
 * parameter: n
 * Return: Always 0 (success)
 */

int main(void)
/* Start by picking a random number*/
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else
	{
		if (n < 0)
		{
		printf("%d is negative\n", n);
		}
		else
		{
		printf("%d is zero\n", n);
		}
	}
	return (0);

}
