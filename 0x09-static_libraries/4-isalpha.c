#include "main.h"

/**
 * _isalpha - check if character is a letter
 * @c: character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') ? 1 : 0);
}
