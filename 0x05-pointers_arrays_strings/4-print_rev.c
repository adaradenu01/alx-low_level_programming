#include "main.h"
/**
 * print_rev - prints strings in reverse
 *
 * @s: This is string input
 */

void print_rev(char *s)
{
	int index, n;

	for (index = 0; s[index] != '\0'; index++)
	{

	}
	for (n = index - 1; s[n] >= 0; n--)
		{
			_putchar(s[n]);
		}
	_putchar('\n');
}
