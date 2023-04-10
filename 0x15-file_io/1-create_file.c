#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename:  name of the file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, size;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (f == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(f);
		return (1);
	}
	for (size = 0; text_content[size] != '\0'; size++)
		;
	w = write(f, text_content, size);
	if (w == -1)
	{
		close(f);
		return (-1);
	}
	close(f);
	return (1);
}
