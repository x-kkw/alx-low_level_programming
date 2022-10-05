#include "main.h"

/**
* _puts - Main function: print a string then a new line
*@str: the string
*Return: N/A
*/
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
