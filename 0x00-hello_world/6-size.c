#include <stdio.h>

/**
 * 
 * main - entry point
 * size of files
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;
	
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
