#include "main.h"

/**
 * create_file - A function to create a file.
 * @filename: A pointer to fname
 * @text_content: A pointer to  string, to write to the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int rs, p,len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	rs = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	p= write(rs, text_content, len);

	if (rs == -1 || p == -1)
		return (-1);
	close(rs);

	return (1);
}

