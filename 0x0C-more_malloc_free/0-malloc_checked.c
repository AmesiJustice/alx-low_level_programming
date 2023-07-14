#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked - Allocates memory
* @b: size of memory in bytes
* Return: returns a void pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
