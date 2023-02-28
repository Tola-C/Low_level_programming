#include "main.h"

/**
 * print_last_digit - putchars the last digit of any number
 * @n: is the number, ld is the last digit
 * Return: Always success 0
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (n < 0)
	{
	ld = ld * -1;
	}
	/* convert int to ascii for puchar function*/
	_putchhar('0' + ld);
	return (0);
}
