#include "main.h"
/**
 * *_strcat- appends the src string to the dest string
 *
 * @char- pointer
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
  int a, int b;
  a=0;
  b=0;

  while (dest[a] != '\0')
  a++;
  while (src[b] != '\0')
  {
    dest[i] = src[b];
    b++;
    a++;
  }

  dest[a] = '\0';
  return (dest);
}
