#include "main.h"

/**
 * print_alphbet_x10 - prints the alphabet 10 times.
 *
 * Return: always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_printf('\n');
	}
}
