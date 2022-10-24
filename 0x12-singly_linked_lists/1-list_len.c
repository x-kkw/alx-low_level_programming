#include "lists.h"
/**
 * list_len - Count the number of elements in a list
 * @h: Pointer to a list
 * Return: Number of elements
 **/

size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int counter = 0;
temp = h;
while (temp)
{
counter++;
temp = temp->next;
}
return (counter);
}
