#include "main.h"

/**
 * print_last_digit - prints last digit
 * @h: function parametr
 * Return: j
 */
int print_last_digit(int h)
{
	int j;

	j = h % 10;
	if (h < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
