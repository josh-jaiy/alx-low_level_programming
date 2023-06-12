#include "main.h"

/**
* _puts_recursion - a function prints a string, followed by a new line
* @y: the printed is a  string
* Return: returns nothing
*/
void _puts_recursion(char *y)
{
	if (*y == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*y);
	_puts_recursion((y + 1));
}
