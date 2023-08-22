#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string in reverse.
 * @s: char pointer
 * Return: returning nothing
*/

void print_rev(char *s)
{
	int count, j, len;

	while (s[count] != '\0')
		count++;

	len = count;
	for (j = len - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
