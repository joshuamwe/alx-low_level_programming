#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lower case 10 times
 *
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	int v;
	char g;

	for (v = 0 ; v < 10 ; v++)
	{
		for (g = 'a' ; g <= 'z' ; g++)
			_putchar(g);
		_putchar('\n');
	}
	_putchar('\n');
}
