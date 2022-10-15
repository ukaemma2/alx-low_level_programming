#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Print all the letters except q and e
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: Success
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
