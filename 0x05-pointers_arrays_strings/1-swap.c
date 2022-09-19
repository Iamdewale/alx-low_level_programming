#include "main.h"

/**
 * swap_int - swaping in a and in b
 * Return: 0
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
	int wale;

	wale = *a;
	*a = *b;
	*b = wale;

}
