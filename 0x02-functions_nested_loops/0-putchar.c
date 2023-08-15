#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - A program that prints "_putchar"
 * Return: returning 0 success
*/

int main(void)
{

	write(1, Putchar, 9);

	return (0);
}
