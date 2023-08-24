#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: the string (str);
 */
char *leet(char *str)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *no = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = no[j];
			}
		}
	}

	return (str);
}
