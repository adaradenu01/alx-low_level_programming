#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: input values
 * @needle: input values
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;


	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			int found = 1;

			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					found = 0;
					break;
				}
			}
			if (found)
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
