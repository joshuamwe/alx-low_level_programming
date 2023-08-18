#include "main.h"
/**
 * print_numbers - prints 0 to 9
 *
 * Return: 0 always
 */
void print_numbers(void)
{
	int w;

	for (w = 0 ; w < 10 ; w++)
		_putchar(w + '0');
	_putchar('\n');
}
