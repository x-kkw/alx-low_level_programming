#include "main.h"

/**
* _strlen - main function: returns string length
*@s: the pointe
*Return: string length
*/

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
