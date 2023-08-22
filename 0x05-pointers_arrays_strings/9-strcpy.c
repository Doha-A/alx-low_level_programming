#include "main.h"
#include <stdio.h>

/**
 * _strcpy - a function that copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: first char pointer
 * @src: second xhar pointer
 * Return: returning dest
*/

char *_strcpy(char *dest, char *src)
{
	int count, i;

	count = 0;
	while (src[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
		dest[i] = src[i];
	dest = '\0';
	return (dest);

}
