#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be searched.
 * @accept: the prefix to be measured.
 *
 * Return: the number of bytes in s which
 * 	   consists only of bytes from accept.
 * 
 * PSEUDOCODE
 * Loop through s and comparw s[i] to values in accept
 * 	increase bytes counter when values in accept can be found
 * 	in *s
 * end loop and return bytes when accept is exhausted.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	
	return (bytes);
}

