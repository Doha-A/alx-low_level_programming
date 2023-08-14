#include <stdio.h>

/**
 * main - A program that prints the numbers from 0 to 9
 * Return: returning 0 success
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
