#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
*/

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
				if (!((x == y) || (y == z) || (z > y) || (y > x)))
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (!(x == 9 && y == 8 && z == 7))
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar('\n');
	return (0);
}
