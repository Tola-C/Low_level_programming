#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Use putchar to print lowercase alphabet in reverse
 * parameter: ch
 * Return: Always 0 (success)
 */

int main(void)

{

	char ch;

	for (ch = 'z'; ch >= 'a'; --ch)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);

}
