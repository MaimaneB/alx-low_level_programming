#include "main.h"
/**
 * HelperMethod - return 0 or 1
 * @num: number being evaluated
 * @i: factor
 *
 *Return: 0 if not prime alt 1 if prime.
 */
int HelperMethod(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (HelperMethod(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if the number is a prime or not
 * @n: number to be checked
 *
 * Return: 1 if the number is a prime number
 * 0 if the number is not a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (HelperMethod(n, 2));
	}
}

