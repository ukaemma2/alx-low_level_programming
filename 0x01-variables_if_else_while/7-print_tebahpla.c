#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: Always Success
 */

int main(void)
{
	char gh;

	for (gh = 'z'; gh >= 'a'; gh--)
	{
		putchar(gh);
	}
	putchar('\n');
	return (0);
}



