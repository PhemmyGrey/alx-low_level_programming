#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print -> numbers and specific if is possitive, negative or zero
 *
 * Return: Always 0 (Success)
 */

int main (void)

{
	int n;

	srand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}

	return (0);

}
