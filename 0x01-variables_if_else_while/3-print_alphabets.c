#include <stdio.h>
/**
 * main - print alphabet in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	for ( ; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	char la = 'A';

	for ( ; la <= 'Z'; ch++)
	 {
		 putchar(la);
	 }
	 putchar('\n');

	 return (0);
}
