#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _strdup - duplicate a string
* @str: pointer
* Return: pointer
*/
char *_strdup(char *str)
{
	int x = 0;
	int y = 0;
	char *d;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[x] != '\0')
	{
		x++;
	}
	 d = (char *)malloc(sizeof(char) * (x + 1));
	if (d == NULL)
	{
		return (NULL);
	}
	while (y < x)
	{
		d[y] = str[y];
		y++;
	}
	return (d);
}
