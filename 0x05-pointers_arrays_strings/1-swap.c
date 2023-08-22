#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first int pointer
 * @b: second int pointer
 * Return: returning nothing
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
