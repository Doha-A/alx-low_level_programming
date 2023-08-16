#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - function that prints the alphabet in lowercase
 * Return: returning 0 success
*/

char print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}

int main(void)
{
	write(2, print_alphabet, 27);
}
