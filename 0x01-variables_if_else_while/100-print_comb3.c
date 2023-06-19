#include<stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int combo1 = 0;
	int combo2;
	int count = 0;

	while (combo1 <= 8)
	{
		combo2 = combo1 + 1;

		while (combo2 <= 9)
		{
			putchar(combo1 + '0');
			putchar(combo2 + '0');
			if (count != 44)
			{
				putchar(',');
				putchar(' ');
			}
			combo2++;
			count++;
		}
		combo1++;
	}
	putchar('\n');
	return (0);
}
