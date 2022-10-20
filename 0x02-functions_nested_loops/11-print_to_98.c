#include <stdio.h>
#include "main.h"

/**
 * main - print_to_98 - prints numbers to 98
 * @n: starting integer
 *
 * Description: prints all natural number from n - 98
 *
 * Return: void
 */

void print_to_98(int n)

{

	if (n >= 98)

	{

		while (n > 98)

			printf("%d, ", n--);

		printf("%d\n", n);

	}



	else

	{

		while (n < 98)

		printf("%d, ", n++);

		printf("%d\n", n);

	}

}
