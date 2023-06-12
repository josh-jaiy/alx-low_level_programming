#include "main.h"

/**
* _strlen_recursion - this function, returns the length of a string
* @y: this is the counted string
* Return: returns the length of the string as an int
*/
int _strlen_recursion(char *y)
{
	if (*y == '\0')
		return (0);
	return (1 + _strlen_recursion(y + 1));
}

