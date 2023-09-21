#include "lists.h"
/**
 * str_len - functoin
 * @s: pointer to strung
 * Return:len
*/
int str_len(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * print_list - func to print
 * @h: node
 * Return: int
*/
size_t print_list(const list_t *h)
{
	list_t *current = h;
	size_t s = 0;
	int str_ln = str_len(current->str);

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", str_ln, current->str);
		current = current->next;
		s++;
	}
	return (s);
}
