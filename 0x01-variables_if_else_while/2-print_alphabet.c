#include <stdio.h>
/**
 * main - prints alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	for ( ; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
