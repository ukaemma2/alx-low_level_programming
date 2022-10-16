#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Success
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');

		if(n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
