#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename:  name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w;
	ssize_t f, size;

	if (filename == NULL)
	return (-1);
	f = open(filename, O_RDWR | O_APPEND);
		if (f < 0)
			return (-1);
	if (text_content == NULL)
	{
		close(f);
		return (1);
	}
	for (size = 0; text_content[size] != '\0'; size++)
		;
	w = write(f, text_content, size);
	if (w < 0)
	{
		close(f);
		return (-1);
	}
	close(f);
	return (1);
}
