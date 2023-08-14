#include <stdio.h>

/**
 * main - A program that prints the alphapet except the letters 'q' and 'e'
 * Return: returning 0 success
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
