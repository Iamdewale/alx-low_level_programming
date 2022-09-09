#include <stdio.h>

/**
 * main - print 0123456789
 * return: 0 (success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%i", x);
		x++;
	}
	putchar('\n');

	return (0);
}
