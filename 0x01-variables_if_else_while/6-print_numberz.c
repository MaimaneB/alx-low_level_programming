#include <stdio.h>
/**
 * main - 'print all single digit numbers of base 10 starting from 0'
 * Description: use the main function
 * the program prints "all single digit numbers of base 10 starting from 0"
 * Return; 0
 */
int main(void)
{
int c;

c = 0;
while (c < 10)
{
	putchar(c + '0');
	c++;
}
putchar('\n');
return (0);
}
