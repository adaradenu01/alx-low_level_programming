#include "main.h"
/**
 * _strpbrk - function that searches string for any set of bytes.
 * @s: input value
 * @accept: inputed value
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
