#include <stdio.h>
/**
 * main - combination of two digits
 *
 * Return: 0
*/

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
			if (!((x == y) || (y > x)))
			{
				putchar(x);
				putchar(y);
				if (!(x == 9 && y == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
