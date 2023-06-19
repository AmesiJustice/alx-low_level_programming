#include<stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 *
 * Return: Always  0 (Success)
 */
int main(void)
{
	int sing_digitNum;
	int comma = 44;

	while (sing_digitNum <= 9)
	{
		putchar('0' + sing_digitNum);
		if (sing_digitNum != 9)
		{
			putchar(comma);
			putchar(' ');
		}
		sing_digitNum++;
	}
	putchar('\n');
	return (0);
}
