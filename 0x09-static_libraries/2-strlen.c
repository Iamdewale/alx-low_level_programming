#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the lenght of string
 * @s: string
 * Return: lenght
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
