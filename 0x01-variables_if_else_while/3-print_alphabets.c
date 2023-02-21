#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */
int main(void)
{
	int ch;
	/*print Uppercase letters */
	for (ch =  'A'; ch <= 'Z'; ch++)
		putchar(ch);
	/* print lowercase letters */
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
