#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
char abc;
int  count = 0;

while (count <= 9)
{
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
}
_putchar('\n');
count++;
}
}
