#include <stdio.h>
/**
 * main - print numbers in base 10
 * Return: Always 0
 */
int main(void)
{
	int num = 0;

	for (; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');

	return (0);
}

