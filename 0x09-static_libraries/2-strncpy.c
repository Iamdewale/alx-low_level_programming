#include "main.h"

/**
 * _strncpy - copies n bytes of a source into buffer of a destination string,
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * at mst n bytes of src are copied
 * if length of src is < n, additional null bytes are written to dest
 * to ensure that a total of n bytes are written.
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
