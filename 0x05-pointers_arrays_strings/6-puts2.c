#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints every other character of a string.
 * @str: char pointer
 * Return: returning nothing
*/

void puts2(char *str)
{
	int count;
	
	count = 0;
	while (str[count] != '\0')
		count++;

	for (i = 0; i <= count; i++)
	{
		for (i % 2 == 0)
			_putchar(str[i]);
		for (i % 2 != 0)
			break;
			
	}
}
