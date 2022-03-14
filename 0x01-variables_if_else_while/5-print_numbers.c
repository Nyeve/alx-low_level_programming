/*
 *
 *   File: 5-print_numbers.c
 *
 *   Auth: Everlyne Angwenyi
 *
 */
#include <stdio.h>
/**
 * main- prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;
	
	do {
		printf("%d", x);
		x++;
	} while (x < 10);
	printf("\n");
	return (0);
}
