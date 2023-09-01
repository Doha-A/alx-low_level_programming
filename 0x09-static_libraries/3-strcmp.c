#include "main.h"
#include <stdio.h>

/**
 * _strcmp - a function that works exactly like strcmp in string.h library
 * @s1: first char pointer (1st string to compare)
 * @s2: second char pointer (2nd string to compare)
 * Return:
 * 0 if both strings are idintical
 * *s1 - *s2 if differrent
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
