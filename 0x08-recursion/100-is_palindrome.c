#include "main.h"
/**
 * is_pal - checks if a string is palindrome
 * @s: original string
 * length: length of string
 *
 * Return: 1, if palindrome, 0,if not
 */

int is_pal(char *s, int length)
{
	if (length <= 1)
	{
		return (1);
	}






	if (s[0] != s[length - 1])
	{
		return (0);
	}
	return (is_pal(s + 1, length - 2));
}

/**
 * is_palindrome - prints a string if palindrome
 * @s: string input
 * @length: lenght of string
 *
 * Return 1
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_pal(s, length));
}
