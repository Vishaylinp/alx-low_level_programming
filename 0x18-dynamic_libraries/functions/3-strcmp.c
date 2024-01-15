#include "main.h"
/**
* _strcmp - compares two values.
* @s1: pointer
* @s2: pointer
* Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
			x++;
	}
		return (0);
}
