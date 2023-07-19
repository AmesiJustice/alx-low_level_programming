#include <stddef.h>
#include "function_pointers.h"

/**
* print_name - prints name using a call back mechanism
* @name: variable to hold name string
* @f: callback function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
