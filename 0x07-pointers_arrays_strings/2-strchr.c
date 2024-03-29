#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: char pointer (string)
 * @c: character the program is looking for its first occurance
 * Return: returns a pointer to the first occurrence of the character c
 * returns NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}

