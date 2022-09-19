#include "main.h"

/**
* swap_int - main function
*@a: pointer to a
*@b: ponter to b
*Return: N/A
*/

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
