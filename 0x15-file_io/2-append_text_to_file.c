#include "main.h"
/**
* append_text_to_file - append text to end of file
* @filename: name of file
* @text_content: content
* Return: 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	o = open(filename, O_WRONLY | O_APPEND, 0662);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
