#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lowercase
 * Return: returning 0 success
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return (void);
}
