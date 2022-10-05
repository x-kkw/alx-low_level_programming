#include "main.h"

/**
* *_strcpy - Main function: copies the string pointed towards
*@dest: copie of the string
*@src: origin of the string
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
