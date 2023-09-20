#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: cnt, pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	unsigned int len = 0, i = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}
	while (*(src + i) != '\0')
	{
		*(dest + len) = *(src + i);
		len++;
		i++;
	}
	*(dest + len) = '\0';
	return (dest);
}

