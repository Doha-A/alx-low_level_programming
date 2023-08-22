#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string.
 * @w: char pointer
 * Return: returning nothing
*/

int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
}
