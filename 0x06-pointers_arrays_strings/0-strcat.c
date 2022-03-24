#include "main.h"
/**
 * _strcat - cat two int.
 *
 * @dest: array the char, with 98 spaces
 *
 * @src: array to concatenate
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
