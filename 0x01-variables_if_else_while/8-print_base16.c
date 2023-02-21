#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */
int main(void)
{
	int i;
	char lets;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (lets = 'a'; lets < 'g'; lets++)
		putchar(lets);
	putchar('\n');

	return (0);
}
