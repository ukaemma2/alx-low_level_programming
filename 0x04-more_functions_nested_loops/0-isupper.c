#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase character
 * @c: character to check
 * Description: Returns 1 if c is uppercase or 0 if is lowecase
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
