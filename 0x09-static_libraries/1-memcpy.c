#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function copies n bytes from memory area src to memory area dest
 * @dest: first char pointer
 * @src: second char pointer
 * @n: unsigned int
 * Return: returning dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

