#include "main.h"

/**
 * *_memset - fills memory block with a particular constant
 * @s - memory space to be filled
 * @b - constant char
 * @n - number of times to fill
 *
 * Return - pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i=0; i<n; i++)
	{
		s[i] = b;
	}

	return (s);
}
