#include "main.h"

/**
* factorial - this  function returns the factorial of a given number
* @n: this is the calculated number
* Return:it returns the factorial of n as an integer
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

