#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* str_concat - combine 2 strings into 1.
* @s1: pointer
* @s2: pointer
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	int x = 0;
	int y = 0;
	int a;
	int b;
	char *com;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	com = malloc(sizeof(char) * x + y + 1);
	if (com == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < x; a++)
	{
		com[a] = s1[a];
	}
	for (b = 0; b <= y; b++)
	{
		com[a] = s2[b];
		a++;
	}
	return (com);
}
