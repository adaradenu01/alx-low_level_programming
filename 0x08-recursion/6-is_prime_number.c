#include "main.h"
/**
 * is_prime_num - calculate if number is a prime number
 * @n: natural number
 * @i: is a counter or divider
 *
 * Return: 1 if prime or 0, if not
 */

int is_prime_num(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}






	if (i == n)
	{
		return (1);
	}



	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_num(n, i + 1));
}

/**
 * is_prime_number - function that prints a prime number
 * @n: integer of natural number
 *
 * Return: 1,if prime, 0, if not
 */

int is_prime_number(int n)
{
	return (is_prime_num(n, 2));
}
