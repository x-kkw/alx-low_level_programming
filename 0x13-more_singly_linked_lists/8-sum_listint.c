#include "lists.h"

/**
 * sum_listint - returns the sum of n data of list
 * @head: list head
 *
 * Return: total sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
