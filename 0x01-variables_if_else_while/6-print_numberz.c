#include<stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sing_digits = 48;

	while (sing_digits <= 57)
	{
		putchar(sing_digits);
		sing_digits++;
	}
	putchar('\n');
	return (0);
}
