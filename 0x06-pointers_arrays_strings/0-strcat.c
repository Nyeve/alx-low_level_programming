#include "main.h"
/**
 * _strcat- appends the src string to the dest string
 *
 * @*dest- destination string
 * @8src- source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *new_dest = dest;

	while (*dest)
		dest++;/* copy all characters of src to dest */
	while (*src)
		*dest++ = *src++;
				/* add terminating null byte */
	*dest = '\0';
	return (new_dest);
}
