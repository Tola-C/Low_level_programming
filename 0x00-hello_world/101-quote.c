#include<stdio.h>
/**
 * main - print text in printf function
 * program should always return 0 after printing text
 * Return: 0
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59);
	return (1);
}
