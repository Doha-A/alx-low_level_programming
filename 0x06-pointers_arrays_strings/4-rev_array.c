#include "main.h"
#include <stdio.h>

/**
 * reverse_array - a function that reverse a string.
 * @a: int pointer
 * @n: array length
 * Return: returning success
*/

void reverse_array(int *a, int n);
{
	int i, temp;


	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - i - 1] = temp;
	}
}
