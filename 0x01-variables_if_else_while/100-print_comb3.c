#include <stdio.h>
/**
 * main - combination of two digits
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 01; x < 90; x != 10; x++)
	{
		putchar(x + '01');
		if (x < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
