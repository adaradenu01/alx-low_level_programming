#include <stdio.h>
/**
 * main - Entry upper and lowercase with putchar
 *
 * Return: 0
*/

int main(void)
{
	char x;
	char y;

	x = 'a';
	y = 'A';
	while
		(x <= 'z') {
			putchar(x);
			x++;
		}
	while
		(y <= 'Z') {
			putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}

