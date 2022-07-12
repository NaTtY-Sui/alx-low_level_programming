#include "main.h"

/**
 * _strlen - returns the length if a string
 * @s: The string to be checked for its string length
 *
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

