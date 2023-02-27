#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all combination of two digits separated by ", "
 * parameter: ch
 * Return: Always 0 (success)
 */

int main(void)

{

	int ch, c;

	for (ch = '0'; ch <= '9'; ++ch)
	{
	for (c = '0'; c <= '9'; ++c)
	{
	if (ch != c && c != '0' && c > ch)
	{
	putchar(ch);
	putchar(c);
	putchar(',');
	putchar(' ');
	}
	}
	}

	putchar('\n');
	return (0);

}
