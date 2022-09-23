#include "main.h"

/**
 * _strcmp - Main function: compares two strings
 * @s1: input parameter
 * @s2: input parameter
 *
 * Return: 0 if equal, otherwise b
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
