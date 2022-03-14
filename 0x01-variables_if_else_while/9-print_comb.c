#include <stdio.h>
/**
 * main - main project
 * Description:all possible single digit number combination.
 * using only 'putchar' four times at most
 * do not use any 'char' variable
 * return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 0)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	purchar('\n');

	return (0);
}

