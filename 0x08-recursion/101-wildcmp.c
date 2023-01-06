#include "main.h"
/**
 * wildcmp_aux - considers two strings options
 * @s1: string value
 * @s2: string value
 * Return: 1, if identical, 0, if not
 */

int wildcmp_aux(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}




	if (*s1 == *s2)
	{
		return (wildcmp_aux(s1 + 1, s2 + 1));
	}




	if (*s2 == '*')
	{
		return (wildcmp_aux(s1, s2 + 1) || wildcmp_aux(s1 + 1, s2));
	}
	return (0);
}


/**
 * wildcmp - compares two strings
 * @s1: string value
 * @s2: string value
 *
 * Return: 1,if identical, 0, if not
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_aux(s1, s2));
}
