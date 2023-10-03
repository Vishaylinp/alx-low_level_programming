#include "main.h"
/**
* read_textfile - Reads text files
* @filename: name of file
* @letters: letters
* Return: number of chars printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, w, r;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}

