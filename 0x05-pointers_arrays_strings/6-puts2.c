#include "main.h"
/**
 * puts2 - prints every other character in a string
 * @str: pointer to string
 *
 * Return: 0.
 */

void puts2(char *str)
{
	int z;

	z = 0;
	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
