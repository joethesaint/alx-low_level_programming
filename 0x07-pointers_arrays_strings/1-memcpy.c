#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: where to copy the memory to
 * @n: the number of bytes
 * @src: the memory area to copy from
 *
 * return: a pointer to @dest.
 *
 * PSEUDOCODE
 * Looping through the length of bytes n
 * 	dest[i] = src[i]
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	
	return (dest);
}
