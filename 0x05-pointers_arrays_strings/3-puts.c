#include "main.h"
/**
 * _puts - function that prints a string, followes by a new line to stdout
 *
 * str: This is string input
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
