#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: n of parameters.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: The sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(arguments);
	}
	return (sum);
}
