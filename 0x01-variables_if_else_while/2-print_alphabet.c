#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Use putchar to print letters of the alphabet in lowercase
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
	putchar('\n');
	return (0);

}
