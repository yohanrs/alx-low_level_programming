#include<stdio.h>
/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 *
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i += 1;
	}
	putchar('\n');
}
