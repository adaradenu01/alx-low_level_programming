#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: input value
 * @accept: expect value
 *
 * Return: 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	unsigned int count = 0;



	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;



		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
	}
	return (count);
}
