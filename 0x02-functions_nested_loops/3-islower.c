#include "main.h"

/**
 * islower - checks for
 * lowercase characters
 *
 * Return: 0 (success)
 * otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar (1);
	}
	else{
		_putchar(0);
	}
	
	return (0);
}
