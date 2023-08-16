#include "main.h"

/**
 * _islower - Checks if the letter is lowercase or uppercase
 * Return: 1 if lowercase, 0 if uppercase
*/

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (0);
}
