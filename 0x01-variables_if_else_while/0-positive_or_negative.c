#include <stdio.h>
#include <time.h>
#include <stdio.h>
/* more header goes there */

/* betty style doc for function */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	if (n > 0)
		printf("%i i!s positive\n", n);
	else if (n == 0)
		printf("%i is positive\n", n);
	else
		printf("%i is positive\n", n);
	return (0);
}

