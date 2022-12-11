#include <stdio.h>
/**
 * main - Printing lowercases with few ommisions
 *
 * Return: 0
*/

int main(void)
{
	char x;

	x = 'a';
	while
		(x <= 'z') {
			if ((x != 'q' && x != 'e') && x <= 'z')
				putchar(x);
			x++;
		}
	putchar('\n');
	return (0);
}
