#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - executes a function given as a parameter on each
* element of an array
* @array: the array of elements
* @size: the size of the array
* @action: a pointer to a function to be used
*
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (j = 0; j < size; j++)
	{
	action(array[j]);
	}
}
