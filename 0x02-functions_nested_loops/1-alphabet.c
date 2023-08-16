#include "main.h"

/**
 * print_alphabet - Calls a function that prints the alphabet in lowercase
 * Return: returning 0 success
*/

void print_alphabet(void)
{
        char c;

        for (c = 'a'; c <= 'z'; c++)
                putchar(c);

        putchar('\n')
	return (0);
}
