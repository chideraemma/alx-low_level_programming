#include "main.h"

/**
 * reset_to_98 - Update the value it oints to 98
 * @n: pointer to n
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	int digit, sign = 0;

	if (*n < 0)
	{
		sign = 1;
		*n = -*n;
	}

	do {
		digit = *n % 10;
		putchar(digit + '0');
		*n /= 10;
	}

	while (*n > 0);
	if (sign)
		putchar('-');
}
