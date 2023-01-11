#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of coin to make change for an amt of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int cents;
	int num_coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coin_types = sizeof(coin_values) / sizeof(int);


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	cents = atoi(argv[1]);


	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}


	for (i = 0; i < num_coin_types; i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			num_coins++;
		}
	}
	printf("%d\n", num_coins);
	return (0);
}
