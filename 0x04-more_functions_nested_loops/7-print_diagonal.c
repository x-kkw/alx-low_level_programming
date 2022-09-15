#include "main.h"

/**
 * print_diagonal - Main function
 *@n: number of times to print '\'
 * Return: N/A
 */

void print_diagonal(int n)
{
	int i;
	char a;
	char b;
	int j;

	a = '\\';
	b = ' ';
	for (i = 0; i < n; i++)
	{
		if (n > 1)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(b);
			}
			_putchar(a);
			_putchar('\n');
		}
	}
		if (n <= 0)
		{
			_putchar('\n');
		}
}
