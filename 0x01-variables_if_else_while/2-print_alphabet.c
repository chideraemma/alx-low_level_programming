#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: getchar()
 */
int main(void)
{
	int ch;

	/* print lowercase letters */
	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
