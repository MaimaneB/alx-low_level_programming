#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: this project prints "the program is positive, zero, or negative 
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int l;
	char str[] + "last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

if (l > 5)

	printf("last digit of %d is %d and is greater than 5\n", str, n, l);

else if (l == 0)

	printf("last digit of %d is %d and is 0\n", str, n, l);

else

	printf("last digiy of %d is %d and is less than 6 and not 0\n", str, n, l);



return (0);
}
