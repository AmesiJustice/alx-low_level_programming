#include "main.h"

/**
 * print_sign - A function that prints the sign of a number
 * @n: parameter
 * Return: 1 and + if n > 0, 0 and 0 if n = 0, and -1 and - if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
