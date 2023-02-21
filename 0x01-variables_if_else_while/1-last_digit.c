#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is", n);
	if (n < 5)
	{
		printf(" and is greater than 5");
	}
	if (n == 0)
	{
		printf(" and is 0\n");
	}
	if (n < 6)
	{
		printf(" and is less than 6 and  not 0\n");
	}
	return (0);
}
