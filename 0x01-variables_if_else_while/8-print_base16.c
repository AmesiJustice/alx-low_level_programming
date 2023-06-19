#include<stdio.h>

/**
 * main - Prints all base 16 numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_base16;

	while (num_base16 <= 9)
	{
		putchar('0' + num_base16);
		num_base16++;
	}
	num_base16 = 97;
	while (num_base16 <= 102)
	{
		putchar(num_base16);
		num_base16++;
	}
	putchar('\n');
	return (0);
}
