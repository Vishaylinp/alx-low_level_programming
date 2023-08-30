#include "main.h"
/**
* _strstr - copies the needle when haystack = needle
* @haystack: pointer
* @needle: pointer
* Return: null or haystack.
*/
char *_strstr(char *haystack, char *needle)
{
	char *x = haystack;
	char *y = needle;

	for (; haystack != '\0'; haystack++)
	{
		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
