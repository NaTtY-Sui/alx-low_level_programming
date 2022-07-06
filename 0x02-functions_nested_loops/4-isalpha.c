#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 *
 * @c: is the character to be cheacked
 *
 * Return: 1 if character is either uppercase or lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
