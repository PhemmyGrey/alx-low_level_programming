#include "main.h"

/**
 * main - Print '_putchar'
 *
 * Return: 0, if successful
 */
int main(void)
{
	char pal[] = "_putchar\n";
	int i = 0;

	while (i <= 8)
	{
		_putchar(pal[i]);
		i++;
	}

	return (0);

}

