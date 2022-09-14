#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number in question
 *
 * Return: The last digit of number
 */

int print_last_digit(int n)
{
	int last_digit = ((n < 0 ? -1 : 1) * n) % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
