#include<stdio.h>
/**
 * main - main
 *
 * Return: 0
 */
void print(void)
{
	printf("_putchar\n");
	return;
}

void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i += 1;
	}
}
