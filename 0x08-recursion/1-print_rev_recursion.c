#include "main.h"

/**
 * _print_rev_recursion - print strings in reversal
 * @s: string value
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}


	_print_rev_recursion(s + 1);
	_putchar(*s);
}
