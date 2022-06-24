#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}


/**
 * int i;
 *
 *	if (argc == 1)
 *		printf("%d\n", argc - 1);
 *	else
 *	{
 *		for (i = 0; *argv; i++, argv++)
 *			;
 *
 *		printf("%d\n", argc - 1);
 *	}
 *
 *	return (0);
 *
 */
