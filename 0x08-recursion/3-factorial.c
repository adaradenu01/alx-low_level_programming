#include "main.h"
/**
 * factorial - prints factorial
 * @n: input value for factorial
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}


	if (n == 0)
	{
		return (1);
	}


	return (n * factorial(n - 1));
}
