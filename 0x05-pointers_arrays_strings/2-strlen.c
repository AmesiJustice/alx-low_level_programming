#include "main.h"
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @s: parameter
 * Return: Always 0
 */
int _strlen(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	return (*s);
}
