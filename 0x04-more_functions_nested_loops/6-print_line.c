#include "main.h"

/**
 * print_line - Main function
 *@n: number of times to  print '_'
 * Return: N/A
 */

void print_line(int n)
{
	int i;
	char k;

	k = '_';
	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar(k);
	}
	_putchar('\n');
}
