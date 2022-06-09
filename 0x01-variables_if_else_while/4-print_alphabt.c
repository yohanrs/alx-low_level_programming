#include<stdio.h>
/**
 * main - main
 *
 * Description: quote
 * Return: 0
 */
int main(void)
{
	char i;
	
	i = 'a';
	while (i <= 'z')
	{
		if ( i != 'q' && i != 'e')
			putchar (i);
		i += 1;
	}
	putchar ('\n');
	return (0);
}
