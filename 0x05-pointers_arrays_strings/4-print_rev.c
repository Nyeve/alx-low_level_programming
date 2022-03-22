#include "main.h"
/**
 * print_rev -takes
 *
 * @s: string to be taken
 * Return: str reversed
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	while (a--)
	{
		_putchar(s[a]);
		_putchar('\n');
	}
}
