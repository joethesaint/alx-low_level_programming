#include "main.h"

/**
 * leet - function encodes specific letters with numbers
 * @str: character pointer
 * Return: str
 */
char *leet(char *str)
{
int len, n;
int num[] = {52, 51, 48, 55, 49};
int low[] = {'a', 'e', 'o', 't', 'l', '\0'};
int high[] = {'A', 'E', 'O', 'T', 'L', '\0'};

for (len = 0; str[len] != '\0'; len++)
{
for (n = 0; low[n] != '\0' || high[n] != '\0'; n++)
{
if (str[len] == low[n] || str[len] == high[n])
{
str[len] = num[n];
}
}
}
str[len] = '\0';
return (str);
}
