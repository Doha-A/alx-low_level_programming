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
	int count, i;

	count = 0;
	while (a[count] != '\0')
		count++;
	n = count;
	for (i = 0; i < count; i++)
		if (i == 0)
			printf("%d", a[i]);
	if (i != 0)
		printf(", %d", a[i]);
	printf("\n");
}
