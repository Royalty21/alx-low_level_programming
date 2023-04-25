#include <stdio.h>
/**
 * main - print alphabet in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	for ( ; ch <= 'z', ch++)
	{
		putchar(ch);
	}
	char ch = 'A';

	for ( ; ch <= 'Z', ch++)
	 {
		 putchar(ch);
	 }
	 putchar('\n');
	 
	 return (0);
}
