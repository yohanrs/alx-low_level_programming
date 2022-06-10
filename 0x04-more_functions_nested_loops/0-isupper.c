#include"main.h"
#include<ctype.h>
/**
 * _isupper - function  
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
