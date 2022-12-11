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

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y < 9; y++)
		{
			if (y > x)
			{
				for (z = 0; z < 9; z++)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == 7 && y == 8 && z == 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
					}
				}
		}
	}
	putchar('\n');
	return (0);
}
