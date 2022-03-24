#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
        char *new_dest = dest;

	while (*dest)
		dest++;
	while (*src && (i < n))
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (new_dest);
}
