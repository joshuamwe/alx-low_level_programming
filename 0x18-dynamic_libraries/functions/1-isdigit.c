#include  "main.h"

/**
 * _isdigit- the main function checks 0 through 9
 * @c: function parameter
 * Return: 1 succesfull or 0 fail
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
