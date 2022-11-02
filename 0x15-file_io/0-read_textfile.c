#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX stdout
 * @filename : A pointer to the name of the file.
 * @letters : the number of letters it should read an print
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t o_stat, r_stat, w_stat;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	o_stat = open(filename, O_RDONLY);
	r_stat = read(o_stat, buffer, letters);
	w_stat = write(STDOUT_FILENO, buffer, r_stat);

	if (o_stat == -1 || r_stat == -1 || w_stat == -1)
	{
		free(buffer);
		return (0);
	}

	buffer[letters] = '\0';

	free(buffer);
	close(o_stat);

	return(w_stat);
}
