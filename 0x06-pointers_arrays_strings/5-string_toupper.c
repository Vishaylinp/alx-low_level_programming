#include "main.h"
/**
* *string_toupper - change lowercase to uppercase.
* @ptr: pointer
* Return: s
*/
char *string_toupper(char *ptr)
{
	int x = 0;

	while (ptr[x] != '\0')
	{
		if (ptr[x] >= 'a' && ptr[x] <= 'z')
		{
			(ptr[x] = ptr[x] - ('a' - 'A'));
		}
			x++;
	}
		return (ptr);
}
