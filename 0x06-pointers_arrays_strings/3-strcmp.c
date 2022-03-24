#include "main.h"

/**
* _strcmp - compares 2 strings
* @s1: first string
* @s2: second string
*
* Description: works exactly like strcmp from <string.h>
*
* Return: -ve integer, 0 or +ve integer if s1 is less than,
* equal to or greater than s2
*/
int _strcmp(char *s1, char *s2)
{
	int s3 = 0;

	while (s3 == 0)
	{
		s3 = *s1 - *s2;

		/* break if one of the strings is empty */
		if (*s1 == '\0' || *s2 == '\0')
			break;

		s1++;
		s2++;
	}

	return (s3);
}