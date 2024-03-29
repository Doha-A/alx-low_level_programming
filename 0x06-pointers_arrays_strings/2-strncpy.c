#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that copies n characters of the string pointed to
 * by src to the buffer pointed to by dest
 * @dest: first char pointer
 * @src: second xhar pointer
 * @n: number of characters to be copied
 * Return: returning dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	count = 0;

	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}

	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}

	return (dest);
}
