#include "main.h"

/**
 * islower - checks for
 * lowercase characters
 *
 * Return: 0 (success)
 * otherwise
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
/*int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar (1);
	}
	else{
		_putchar(0);
	}
	
	return (0);
}*/
