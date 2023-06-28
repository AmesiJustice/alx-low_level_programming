#include <ctype.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: parameter
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);

}
