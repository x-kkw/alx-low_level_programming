#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name
 * @f: is pointer
 * Return: N/A.
**/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
else
{
f(name);
}
}
