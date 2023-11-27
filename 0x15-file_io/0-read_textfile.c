#include "main.h"
/**
* read_textfile - read the text file
* @filename: filename
* @letters: number of characters
* Return: number of characters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t rd;
	ssize_t wr;
	char *buff = malloc(sizeof(char) * (letters));

	if(buff == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		free(buff);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	rd = read(fd, buff, letters);
	if (rd <= 0)
	{
		free(buff);
		return (0);
	}
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1 || wr != rd)
	{
		free(buff);
		return (0);
	}
	close(fd);
	free(buff);
	return (wr);
}
