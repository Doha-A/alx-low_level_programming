#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 -  a function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: int pointer
 * Return: returning nothing
*/


void reset_to_98(int *n)
{
	n = 402;
	int m;

	m = 98;
	reset_to_98(m);

}