#include "main.h"

/**
 * _strncpy - Main function: copy the string
 * @dest: array
 * @src: the pointer which receives the string
 * @n: iteration count
 *
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
