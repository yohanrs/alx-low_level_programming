#include<stdio.h>
/**
 * main - main
 *
 * Description: quote
 * Return: 0
 */
int main(void){
	char i;
	char j;

	i = 'a';
	j = 'A';
	while (i <= 'z')
	{
		putchar (i);
		i += 1;
	}
	while (j <= 'Z')
	{
		putchar (j);
		j += 1;
	}
	putchar ('\n');
	return (0);
}
