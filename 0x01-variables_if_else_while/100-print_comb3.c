#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Aways 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/*for all tens digits*/
	{
		for (ones = '0'; ones <= '9'; ones++)/*for printing ones digits*/
		{
			if(!((ones == tens) || (tens > ones)))/*for eliminated the likelyhood of repetition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*In order to add comas and spaces*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
