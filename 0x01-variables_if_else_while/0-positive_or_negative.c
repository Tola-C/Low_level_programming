#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*Source code to pick a random number and indicatew whether it is positive, negative or zero*/

int main(void)
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
		printf("%dis negative\n", n);
		}
		else
		{
		printf("%d is zero\n", n);
		}
	}
	return(0);
}
