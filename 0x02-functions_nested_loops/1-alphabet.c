#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - function that prints the alphabet in lowercase
 * main - Calls the print_alphabet fn
 * Return: returning 0 success
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}

int main(void)
{
	print_alphabet();
}
