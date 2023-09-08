#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat  - combine two stings with number restriction
* @s1: pointer
* @s2: pointer
* @n: number
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c = 0;
	unsigned int d = 0;
	char *com;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0' && b <= n)
	{
		b++;
	}
	com = malloc(sizeof(char) * (a + b + 1));
	if (com == NULL)
	{
		return (NULL);
	}
	while (c < a)
	{
		com[c] = s1[c];
		c++;
	}
	while (d < b)
	{
		com[c + d] = s2[d];
		d++;
	}
	com[c + d] = '\0';

	return (com);
}
