#include "main.h"
/**
* append_text_to_file - append to text
* @filename: filename
* @text_content: text content
* Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND | O_EXCL);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}

	}
	wr = write(fd, text_content, i);
	if (fd == -1 || wr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);

}
