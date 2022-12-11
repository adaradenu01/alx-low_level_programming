#include <stdio.h>
/**
 * main - Printing all base 16 numbers in lowercase
 *
 * Return: 0
*/

int main(void)
{
	char x;

	int a;

	x = 'a';
	a = 0;
	while
		(a < 10) {
			putchar(a + '0');
			a++;
		}
	while
		(x <= 'f') {
			putchar(x);
			x++;
		}
	putchar('\n');
	return (0);
}
