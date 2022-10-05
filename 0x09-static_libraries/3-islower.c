#include "main.h"

/**
 * _islower - check if character is lowercase
 * c: character to be checked
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	return ('a' <= c && c <= 'z' ? 1 : 0);
}
