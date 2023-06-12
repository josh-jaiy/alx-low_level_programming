#include "main.h"
#include <string.h>

/**
* _print_rev_recursion - this function prints string in reverse!
* @y: this is the printed strings
* Return: returns nothing
*/
void _print_rev_recursion(char *y)
{
	if (*y != '\0')
	{
		_print_rev_recursion(y + 1);
		_putchar(*y);
	}
}

