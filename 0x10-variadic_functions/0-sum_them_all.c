#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
*
* @n: fixed argument
* Return: Return the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);

	else
	{
		unsigned int i;

		for (i = 0; i < n; i++)
		sum += va_arg(ptr, const unsigned int);
		va_end(ptr);
		return (sum);
	}
}
