#include <stdio.h>

/**
 * main - A program that pt=rints the alphapet in lowercase
 * Return: returning 0 success
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
