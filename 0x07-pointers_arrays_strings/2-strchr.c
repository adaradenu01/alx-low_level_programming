#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: inputed value
 * @c: inputed value
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s ==  c*/
		{
			return (s); /*return s*/
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);/* values null*/
}
