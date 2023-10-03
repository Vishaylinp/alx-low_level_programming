#include "main.h"
/**
* create_file - create a file or truncate
* @filename: filename
* @text_content: content
* Return: 1
*/
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	while (*text_content != '\0')
	{
		len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}

