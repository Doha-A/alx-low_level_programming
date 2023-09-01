#include "main.h"

/**
 * _isalpha - Checks if the letter is lowercase or uppercase
 * @c: alphabet character
 * Return: 1 if lowercase, else returns
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

