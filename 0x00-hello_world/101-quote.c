#include <stdio.h>
#include <unistd.h>

/**
 * main - prints out the string in write function
 * Description: the main program
 * prints out the string to the standard error
 *
 * Return: 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
