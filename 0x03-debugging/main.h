#ifndef MAIN_H
#define MAIN_H

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
void _putchar(char);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int);
void positive_or_negative(int);
int largest_number(int a, int b, int c);
void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */
