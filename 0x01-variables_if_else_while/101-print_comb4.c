#include<stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int combo1 = 0;
	int combo2 = 1;
	int combo3;
	int count = 0;

	while (combo1 <= 8)
	{
		combo2 = combo1 + 1;

		while (combo2 <= 9)
		{
			combo3 = combo2 + 1;

			while (combo3 <= 9)
			{
				putchar(combo1 + '0');
				putchar(combo2 + '0');
				putchar(combo3 + '0');

				if (count != 119)
				{
					putchar(',');
					putchar(' ');
				}
				combo3++;
				count++;
			}
			combo2++;
		}
		combo1++;
	}
	putchar('\n');
	return (0);
}
