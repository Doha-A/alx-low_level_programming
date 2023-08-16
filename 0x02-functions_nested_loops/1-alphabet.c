#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - function that prints the alphabet in lowercase
 * Return: returning 0 success
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
