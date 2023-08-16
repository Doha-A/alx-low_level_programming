#include "main.h"

/**
 * print_last_digit - a function returning the last digit of the number
 * @n: integer
 * Return: returns the last digit
*/

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
