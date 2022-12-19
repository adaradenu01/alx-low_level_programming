#include "main.h"
/**
 * print_array - prints n element of array followed by a new line.
 * @a: pointer to array.
 * @n: number of array elements
 *
 * Return: 0.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if ( x != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf('\n');
}
