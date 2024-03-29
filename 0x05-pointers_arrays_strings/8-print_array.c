#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * @a: int pointer
 * @n: number of elements of the array to be printed
 * Return: returning nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i == 0)
			printf("%d", a[i]);
		else if (i != 0)
			printf(", %d", a[i]);
	printf("\n");
}
