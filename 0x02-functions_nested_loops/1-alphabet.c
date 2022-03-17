#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char abc;

	abc = 'a';

	while (abc <= 'z')
	{
		_putchar(abc);
		abc++;
	}
	_putchar('\n');

}
