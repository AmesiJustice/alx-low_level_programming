#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: parameter
 * Return: 1 if c is a letter, lowercase or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
