#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @src: input value
 * @dest: inputed value
 * @n: inputed values
 *
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;



	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
