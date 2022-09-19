#include "main.h"

/**
* rev_string - Main function: reverse a string
*@s: string
*Return: N/A
*/

void rev_string(char *s)
{
	int len, i;
	char l;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	len--;
	for (i = 0; i < len; i++)
	{
		l = *(s + len);
		*(s + len) = *(s + i);
		*(s + i) = l;
		len--;
	}
}
