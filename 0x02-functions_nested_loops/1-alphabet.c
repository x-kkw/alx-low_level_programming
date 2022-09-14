#include "main.h"


/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: no return value
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
