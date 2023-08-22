#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string.
 * @str: char pointer
 * Return: returning nothing
*/

void puts_half(char *str)
{
	int count, len, i;

	count = 0;
	while (str[count] != '\0')
		count++;
	len = count - 1;
	for (i = 0; i <= len / 2; i++)
		_putchar(str[i]);
	_putchar('\n');
}
