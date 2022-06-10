#include"main.h"
#include<ctype.h>
/**
 * _islower - function  
 *@c: first arg
 *
 * Return: int
 */
int _isupper(int c)
{
	int r;

	r = isupper(c);
	if (r == 0)
		return (r);
	else
		return (1);
}
