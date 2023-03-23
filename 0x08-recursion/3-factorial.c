#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: The number from which the factorial is to be found
 *
 * Return:
 * if n > 0 - the factorial of n
 * if n < 0 - return 1 to indicate an error
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	}
		else if (n >= 0 && n <= 1)
			return (1);
}
