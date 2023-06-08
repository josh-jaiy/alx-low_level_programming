#include "main.h"

/**
* _puts_recursion -The function checks if the current character pointed to by y
* print it using the putchar
* Return: returns nothing
*/


void _puts_recursion(char *y) {
    if (*y == '\0') {
        putchar('\n');
        return;
    }

    putchar(*y);
    _puts_recursion(y + 1);
}

