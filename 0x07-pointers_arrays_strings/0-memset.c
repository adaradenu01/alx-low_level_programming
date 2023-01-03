#include "main.h"
/**
 * _memset - function that fills memory with constant type.
 * @s: input value
 * @b: input value
 * @n: input value
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}