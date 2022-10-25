#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 * @a: input1
 * @b: input2
 *
 * Return: Always n
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

