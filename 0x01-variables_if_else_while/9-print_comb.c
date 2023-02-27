#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all single digits separated by ", "
 * parameter: ch
 * Return: Always 0 (success)
 */

int main(void)

{

	char ch;

	for (ch = '0'; ch <= '9'; ++ch)
	{
	putchar(ch);
	if (ch != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);

}
