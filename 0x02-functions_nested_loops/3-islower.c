#include "main.h"

/**
 * _islower - Checks if the letter is lowercase or uppercase
 * @c: alphabet character
 * Return: 1 if lowercase, 0 if uppercase
*/

int _islower(int c);
{

	if ((c + '0') >= 'a' && (c + '0') <= 'z')
	{
		return (1);
	}
	else if ((c + '0') >= 'A' && (c + '0') <= 'Z')
	{
		return (0);
	}
	else
	{
		break;
	}
}

