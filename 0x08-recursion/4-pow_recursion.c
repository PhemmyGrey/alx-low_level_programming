#include "main.h"

/**
 * _pow_recursion - raise to power
 * @x: input
 * @y: input
 * Return: Zero 0 (success)
 */

int _pow_recursion(int x, int y)

{
    if (y < 0)
        return (-1);
    if (y == 0)
        return (1);
    else
        return (x * _pow_recursion(x, y -1));
}
