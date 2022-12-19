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
	char *start = dest;

	while (src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
