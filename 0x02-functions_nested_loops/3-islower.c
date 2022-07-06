#include "main.h"

/**
 * islower - checks for
 * lowercase characters
 *
 * Return: 1 if character is lowercase, 0 otherwise
 * otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	
	else
		return(0);
	
}
