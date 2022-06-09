#include<stdio.h>
/**
 * _islower - function
 *
 * Return: int
 */
int _islower(int c)
{
	char i;

	i = char(c);

	if (islower(i))
		return (1);
	if (!islower(i))
		return (0);
}
