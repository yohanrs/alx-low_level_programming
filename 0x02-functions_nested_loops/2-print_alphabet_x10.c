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

	j = 0;
	while (j < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			putchar(i);
			i += 1;
		}
		putchar('\n');
		j++;
	}
}

