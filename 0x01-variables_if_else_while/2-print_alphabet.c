#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char printAlpha = 'a';

	while (printAlpha <= 'z')
	{
		putchar(printAlpha);
	printAlpha++;
	}
	putchar('\n');
	return (0);
}
