#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n > zero
 * 0 if n = zero
 * -1 if n < zero
 */

int print_sign(int n)
{
	int sign = 0;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		sign = -1;
		_putchar('-');
	}
	else
	{
		sign = 0;
		_putchar('0');
	}

	return (sign);
}
