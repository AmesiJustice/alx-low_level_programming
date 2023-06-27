#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';

	int n;

	for (n = 0; n < 10; n++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		alpha = 'a';
	}
}
