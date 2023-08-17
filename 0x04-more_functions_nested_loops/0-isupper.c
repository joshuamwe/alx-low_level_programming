#include "main.h"
#include <stdio.h>
/**
*_isupper -function checks for uppercase character
*@c: function parameter
*@1:function parameter
*Return: 1 when successful or 0 when fail
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
