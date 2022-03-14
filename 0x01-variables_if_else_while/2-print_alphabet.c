/*
 * File: 2-print_alphabet.c
 * Auth: Everlyne Angwenyi
/*
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 'A';
		do {
		int low_x = tolower(x);

		putchar(low_x);

		x++;
	}
		while (x <= 'Z');
		putchar('\n');

	return (0);

}
