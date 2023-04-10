#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- a function that read  file print to STDOUT.
 * @filename: text file being read
 * @letters: no of letters to be read
 * Return: 0 if fname is NULL or actual number of letters it could read/print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t rs;
	ssize_t v;
	ssize_t yt;

	rs = open(filename, O_RDONLY);
	if (rs == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	yt = read(rs, buf, letters);
	v = write(STDOUT_FILENO, buf, yt);

	free(buf);
	close(rs);
	return (v);
}

