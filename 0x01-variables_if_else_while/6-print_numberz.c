#include <stdio.h>

/**
 * main - A program that prints the numbers from 0 to 9
 * Return: returning 0 success
*/

int main(void)
{
	int n = 0;
	int i;

	i = n + '0';
	for (; i <= 9; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
