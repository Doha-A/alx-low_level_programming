#include "main.h"
#include <stdio.h>

/**
 * _memset -  function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: first char pointer
 * @b: second char pointer
 * @n: unsigned int
 * Return: returning s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	
	return (s);	
}
