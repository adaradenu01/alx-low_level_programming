#include "main.h"
/**
 * strcpy - copying string pointed by src,terminating null bytes
 * @dest: This is the destination
 * @src: This is the copy pointer
 *
 * Return: This is the return copy
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
