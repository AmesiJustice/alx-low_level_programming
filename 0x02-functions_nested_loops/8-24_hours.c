#include <stdio.h>
#include "main.h"

/**
 * jack_bauer -prints every minute of the day starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
		printf("%02d:%02d", a, b);
		printf("\n");
		}
	}
}
