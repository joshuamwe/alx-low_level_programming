#include "main.h"
#include <stdio.h>
#include <string.h>
 /**
  * puts2 - printsevert character of astring
  * Return: 0
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}

