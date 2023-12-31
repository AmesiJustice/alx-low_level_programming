#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
* print_list - prints all elements of a list_t list
* @h: pointer variable
* Return: The number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}

	return (count);
}
