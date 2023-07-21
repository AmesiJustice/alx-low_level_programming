#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
* print_strings -  prints strings
*
* @separator: the string to be printed between the strings
* @n: the number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg_var;
unsigned int i;
char *print;

va_start(arg_var, n);
for (i = 0; i < n; i++)
{
print =  va_arg(arg_var, char *);

if (print == NULL)
{
printf("(nil)");
}
else
{
printf("%s", print);
}

if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
va_end(arg_var);
printf("\n");
}
