#include "lists.h"
/**
 * list_len - func
 * @h:list
 * Return:len
*/
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
