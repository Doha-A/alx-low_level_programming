#include <stdio.h>

/**
 * main - A program that prints all numbers of base 16 in lowercase
 * Return: returning 0 success
*/

int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

