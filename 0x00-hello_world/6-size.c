#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int long_intType;
	long long int long_long_intType;
	float floatType;

	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of int: %zu byte\n", sizeof(intType));
	printf("Size of long int: %zu byte\n", sizeof(long_intType));
	printf("Size of long long int: %zu byte\n", sizeof(long_long_intType));
	printf("Size of float: %zu byte\n", sizeof(floatType));
	return (0);
}
