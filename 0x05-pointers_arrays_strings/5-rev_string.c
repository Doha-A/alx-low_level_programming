#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverse a string.
 * @s: char pointer
 * Return: returning success
*/

void rev_string(char *s)
{
	int count, i, temp;

	count = 0;

	while (s[count] != '\0')
		count++;

	for (i = 0; i < count / 2; i++)
	{
		temp = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = temp;
	}
}
