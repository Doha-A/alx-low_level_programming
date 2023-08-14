#include <stdio.h>

/**
 * main - A program that prints the alphapet in reverse in lowercase
 * Return: returning 0 success
*/

int main(void)
{

	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
