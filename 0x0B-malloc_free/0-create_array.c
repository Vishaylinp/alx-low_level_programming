#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* create_array - create a array
* @unsigned int size: variable
* @char c: character
* Return: pointer
*/
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(c) * size);
	if (s == 0)
	{

		return (NULL);
	}
		for (x = 0; x < size; x++)
		{
			s[x] = c;
		}
		return (s);
}
