#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 *
 * Description: Print to stout without using put or printf
 * Description: Print to stderr without usig puts or printf
 * Return: If all goes on, it return 1
 */
int main(void)
{
	char strng[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";
	int nbytes = strlen(strng);
	write(2, strng, nbytes);
	return (1);
}


