#include "main.h"

/**
 * _memset - fill the first given number of bytes of the memory area
 *           pointed to by a string with a constant byte
 *
 * @s: pointer to string
 * @b: constant byte
 * @n: given number of bytes
 *
 * Return: s, pointer to result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char **p = &s;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (*p);
}

