#include<stdio.h>
/**
 * main - new
 *
 * Description: nothing
 * Return: 0
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(b));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
