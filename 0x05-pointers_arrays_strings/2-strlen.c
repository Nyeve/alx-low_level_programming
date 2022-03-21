#include "main.h"
/**
 *_strlen - takes string niput as a parmeter
 *
 *@s: string to be calculated
 */
int _strlen(char *s)
{
	int iter = 0;

	while (s[iter]) != '\0'
	{
		iter++;
	}
	return (iter);
}
