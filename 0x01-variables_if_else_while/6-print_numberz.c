#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * You are not allowed to use any variable of type char
 * You can only use putchar twice in your code
 * All your code should be in the main f
 * Return: Always success
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}


