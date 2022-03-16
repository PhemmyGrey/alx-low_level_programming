#include "main.h"

/**
 * main - Print '_putchar'
 *
 * Return: 0, if successful
 */
int main(void)
{
	char pal = "_putchar";
	int i = 0;

	for (; i < 8 ; i++)
	{
		_putchar(pal[i]);
	}
	_putchar('\n');

	return (0);
}

