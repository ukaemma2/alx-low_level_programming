#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Return: Always Success 0
 */

int main(void)
{
	int n;
	char gh;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	for (gh = 'a'; gh <= 'f'; gh++)
	{
		putchar(gh);
	}
	putchar('\n');
	return (0);
}
