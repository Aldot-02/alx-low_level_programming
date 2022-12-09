#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers in base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char al;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (al = 'a'; al <= 'f'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
