#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase and uppercase
 * Return: returning 0 success
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}

