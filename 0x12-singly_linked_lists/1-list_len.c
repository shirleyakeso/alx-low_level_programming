#include "lists.h"



/**
 * list_len - number of elements in a list.
 * @h: name of the list
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)

{

	int count = 0;



	while (h)

	{

		count++;

		h = h->next;

	}

	return (count);

}
