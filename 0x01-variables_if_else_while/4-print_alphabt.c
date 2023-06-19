#include<stdio.h>
/**
 * main - prints all lowercase letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		if (lower_alpha != 'e' && lower_alpha != 'q')
			putchar(lower_alpha);
		lower_alpha++;
	}
	putchar('\n');
	return (0);
}
