#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverse a string.
 * @s: char pointer
 * Return: returning success
*/

void rev_string(char *s)
{
	int count, j, len;

	count = 0;

	while (s[count] != '\0')
		count++;

	len = count - 1;
	for (j = len; j >= 0; j--)
		*s = s[j];
}
