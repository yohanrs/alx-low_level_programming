#include<stdio.h>
/**
 * print_alphabet_x10 - type
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	i = 'a';
	j = 0;
	while (i <= 'z')
	{
		while (j < 10)
		{
			putchar(i);
			i += 1;
		}
		putchar('\n');
	}
}

