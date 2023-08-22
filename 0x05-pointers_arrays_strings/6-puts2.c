#include "main.h"
#include <stdio.h>

/**
 * puts2 - a function that prints every other character of a string.
 * @str: char pointer
 * Return: returning nothing
*/

void puts2(char *str)
{
	int count, i;

	count = 0;
	while (str[count] != '\0')
		count++;
	for (i = 0; i <= count; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
