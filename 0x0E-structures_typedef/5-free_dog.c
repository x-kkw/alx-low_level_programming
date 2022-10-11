#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function
 * @d: pointer to dog_t
 *
 * Return: N/A.
**/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
