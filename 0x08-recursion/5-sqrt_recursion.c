#include "main.h"
/**
 * _sqrt_recursion - print the square root of a number
 * @n: square root value of i
 * @i: input number
 *
 * Return: 0
 */

int _sqrt_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}


	if (i * i > n)
	{
		return (-1);
	}


	return (_sqrt_recursion(n, i + 1));
}

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(n, 1));
}
