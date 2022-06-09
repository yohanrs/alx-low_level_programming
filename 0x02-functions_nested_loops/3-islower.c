#include<stdio.h>
#include<ctype.h>
/**
 * _islower - function
 *@c: first arg
 *
 * Return: int
 */
int _islower(int c)
{
	int r;

	r = islower (c);
	if (r == 0)
		return (r);
	else
		return (1);
}
