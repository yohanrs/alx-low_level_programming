#include<stdio.h>
/**
 * main - main
 *
 * Description - nothing
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i += 1;
	}
	putchar('\n');
	return (0);
}
