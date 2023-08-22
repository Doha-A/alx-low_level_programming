#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string.
 * @str: char pointer
 * Return: returning nothing
*/

void puts_half(char *str)
{
	int count, i;

	count = 0;
	while (str[count] != '\0')
		count++;
	if (count % 2 == 0)
	{
		for (i = count / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else if (count % 2 != 0)
	{
		for (i = (count - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i + 1]);
	}
	_putchar('\n');
}
