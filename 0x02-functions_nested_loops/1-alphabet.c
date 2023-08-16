#include "main.h"

/**
 *print_alphabet - function prints alphabets in lower case
 *Return: 0
 */

void print_alphabet(void)
{
	char v;

	for (v = 'a' ; v <= 'z' ; v++)
		_putchar(v);
	_putchar('\n');
}
