#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_noncat- concatenate two strings using an inputted number of bytes
 * @s1: The first string
 * @s2: The second string
 * @n: maximum number of bytes of s2 to concat to s1
 *
 * Return: If the function fails - NULL.
 *	otherwise - a pointer to the concatenated space in memeory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	len = 0;

	for (index = 0; s1[index]; index++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s1[index];
	concat[len] = '\0';

	return (concat);
}
