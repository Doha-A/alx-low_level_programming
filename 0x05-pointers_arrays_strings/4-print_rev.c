#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string in reverse.
 * @s: char pointer
 * Return: returning success
*/

void print_rev(char *s)
{
	int count, j, len;

	count = 0;

	while (s[count] != '\0')
		count++;

	len = count;
	for (j = len; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
