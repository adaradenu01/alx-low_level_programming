#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - function that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum, i, j;


	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}


	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
