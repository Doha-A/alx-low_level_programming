#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: char pointer
 * @accept: char pointer
 * Return: Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, check;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				check = 1;
			}
		}
		if (check == 0)
		{
			return (f);
		}
	}

	return (0);
}
