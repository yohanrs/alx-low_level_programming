#include<stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i += 1;
	}
	putchar('\n');
	return (0);
}
