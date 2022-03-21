#include
/**
 *prin_rev -takes
 *
 * @s: string to be taken
 * Return: str reversed
 */
void print_rev(char *s)
{
	int iter = sizeof(s) - 1;

	for (iter = _strlen(s)iter >=0; iter--)
		_putchar(*(s + iter));
	_putchar(10);
}

