#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 */

int main(void)
{
	int gh;


	for (gh = 'a'; gh <= 'z'; gh++)
	{
		putchar(gh);
	}
	putchar('\n');
	return (0);
}

