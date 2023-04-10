#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: file
 * @letters: number of letters to read and print
 * Return:  actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t r, w;
	int f;

	if (filename == NULL)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f < 0)
	{
		free(ptr);
		return (0);
	}
	r = write(f, ptr, letters);
	if (r < 0)
	{
		free(ptr);
		return (0);
	}
	if (r > 0)
		w = write(STDOUT_FILENO, ptr, r);

	if (w < r)
	{
		free(ptr);
		return (0);
	}
	w = close(f);
	if (w < 0)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	return (r);
}
