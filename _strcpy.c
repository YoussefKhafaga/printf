#include "main.h"

/**
 * _strcpy - copy string
 *
 * @src: pointer to the string to be copied
 * @dest: string to be copied to
 *
 * Return: the pointer to dest;
 */
char *_strcpy(char *dest, char *src)
{
	char *cp;
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	cp = dest;
	return (cp);
}

