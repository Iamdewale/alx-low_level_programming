#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: to print string
 */

void _puts(char *str)
{
	int w = 0;

	while (str[w])
	{
		_putchar(str[w]);
		w++;
	}
	_putchar('\n');
}
