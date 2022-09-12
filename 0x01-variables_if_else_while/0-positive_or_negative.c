#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is positive, zero, or negative 
 *
 * Description - this program prints "program is positive, zero, or negative"
 * Return: 0
 */
int main(void)

{
int n; 

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5) 
{
	printf("last digit of %i is %i and is positive\n", n, n % 10);
}

else if (n % 10 == 0)
{
	printf("last digit of %i is %i and is zero\n", n, n % 10);
}

else (n % -10 < 0)
{
	printf("last digit of %i is %i and  negative\n", n); 
}

return (0);
}

