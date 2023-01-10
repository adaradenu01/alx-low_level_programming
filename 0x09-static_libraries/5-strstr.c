#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: input values
 * @needle: input values
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;
	char *q = needle;




	while (*p != '\0')
	{
		if (*p == *q)
		{
			char *start = p;


			while (*q != '\0')
			{
				if (*p != *q)
				{
					break;
				}
				p++;
				q++;
			}
			if (*q == '\0')
			{
				return (start);
			}
			p = start;
			q = needle;
		}
		p++;
	}
	return (NULL);
}
