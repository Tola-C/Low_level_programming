#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Use putchar to print all base 16 numbers in lowercase
 * parameter: ch
 * Return: Always 0 (success)
 */

int main(void)

{

	char ch;

	for (ch = '0'; ch <= '9'; ++ch)
	{
	putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ++ch)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);

}
