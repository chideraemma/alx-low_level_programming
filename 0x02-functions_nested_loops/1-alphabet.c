#include <stdio.h>
#include "main.h"

/**
 * printf_alphbet - Printf the alphbet in lowercase.
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
