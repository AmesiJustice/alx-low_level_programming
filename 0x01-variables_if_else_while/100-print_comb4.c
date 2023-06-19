#include<stdio.h>
/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int combo1 = 0;
        int combo2 = combo1++;

        while (combo1 < 10)
        {
                /*combo2 = combo1++;*/

                while (combo2 < 10)
                {
                        putchar(combo1 + '0');
                        putchar(combo2 + '0');
			putchar(',');
			putchar(' ');
			/*combo2++;*/
		}
		combo1++;
	}
	putchar('\n');
	return (0);
}
