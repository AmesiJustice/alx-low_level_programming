#include<stdio.h>

/**
 * main - Prints lowercase letters in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char rev_alpha = 'z';

	while (rev_alpha >= 'a')
	{
		putchar(rev_alpha);
		rev_alpha--;
	}
	putchar('\n');
	return (0);
}
