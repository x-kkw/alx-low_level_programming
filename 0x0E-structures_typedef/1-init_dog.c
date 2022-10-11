#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - main function
 * @d: pointer to structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: N/A.
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
