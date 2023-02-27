#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all combinations of three digits separated by ", "
 * parameter: ch, c, h
 * Return: Always 0 (success)
 */

int main(void)

{

	int ch, c, h;

	for (ch = '0'; ch <= '9'; ++ch)
	{
	for (c = ch + 1; c <= '9'; ++c)
	{
	for (h = c + 1; h <= '9'; ++h)
	{
	putchar(ch);
	putchar(c);
	putchar(h);
	if (ch == '7' && c == '8' && h == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}

	putchar('\n');
	return (0);

}
