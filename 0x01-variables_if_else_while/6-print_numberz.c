#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all single digit base 10 numbers using putchar
 * parameter: ch
 * Return: Always 0 (success)
 */

int main(void)

{

	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);

}
