#include "main.h"
/**
 * helperMethod - checks if the sqrt of a number exists.
 * @poSqrt: possibility of number having a sqrt.
 * @num: number
 *
 * Return: if sqrt error print -1
 */
int helperMethod(int num, int poSqrt)
{
	if ((poSqrt * poSqrt) == num)
	{
		return (poSqrt);
	}
	else
	{
		if ((poSqrt * poSqrt) > num)
			return (-1);

		else
			return (helperMethod(num, poSqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: variable to find sqrt of
 *
 * Return: sqrt of n.
 * -1 if n does not have a natural sqrt.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperMethod(n, 0));
}
