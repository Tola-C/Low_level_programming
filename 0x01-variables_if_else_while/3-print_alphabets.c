#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Use putchar to print the alphabet in lowercase & uppercase
 * parameter: ch
 * Return: Always 0 (success)
 */

int main(void)

{

	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ++ch)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);

}
