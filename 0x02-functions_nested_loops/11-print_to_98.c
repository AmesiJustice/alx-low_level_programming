#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - is a f unctio thata
 * @n: is afauc
 */

void print_to_98(int n)
{
int k = n;

while (k != 98)
{
printf("%d, ", k);
if (n >= 98)
k--;
else
k++;
}
printf("%d\n", k);
}
