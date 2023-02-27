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
	for (c = ch + 1; c <= '9'; ++c)
	{
	putchar(ch);
	putchar(c);
	if (ch == '8' && c == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');
	return (0);

}
