#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the value to be checked
 *
 * Return: prints 1 if it's greater than zero
 *                0 if it's equal to zero
 *               -1 if it's less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
