#include "main.h"

/**
* puts2 - Main function: print one char out of 2 of a string
*@str: string
*Return: N/A
*/

void puts2(char *str)
{
	int len;
	char l;

	for (len = 0; *(str + len) != 0; len++)
	{
		if (len % 2 == 0)
		{
			l = *(str + len);
			_putchar(l);
		}
	}
	_putchar('\n');
}
