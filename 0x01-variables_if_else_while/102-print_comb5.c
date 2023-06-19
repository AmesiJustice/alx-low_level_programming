#include<stdio.h>

/**
 * main - Prints all possible different combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int combo1 = 0;
	int combo2;
	int count = 0;

	while (combo1 <= 98)
	{
		combo2 = combo1 + 1;
		while (combo2 <= 99)
		{
			putchar((combo1 / 10) + '0');
			putchar((combo1 % 10) + '0');
			putchar(' ');
			putchar((combo2 / 10) + '0');
			putchar((combo2 % 10) + '0');
			if (count != 4949)
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
