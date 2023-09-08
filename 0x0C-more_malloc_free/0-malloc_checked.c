#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* malloc_checked - allocate memory using malloc
* @b: variable
* Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
