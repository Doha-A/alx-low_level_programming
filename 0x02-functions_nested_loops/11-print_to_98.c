#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers uo to no 98
 * @n: first natural number
 * Return: returns the last digit
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
