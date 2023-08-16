#include "main.h"

/**
 * _islower - Checks if the letter is lowercase or uppercase
 * @c: alphabet character
 * Return: 1 if lowercase, else returns
*/

int _islower(int c);
{

	if ((c + '0') >= 'a' && (c + '0') <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

