#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of signle digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
		}
		else
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
