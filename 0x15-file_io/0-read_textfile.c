#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output
 * @filename : char point which contains the pathname
 * @letters : the number of letters it should read and print
 *
 * Return : return the actual number of letters it could read and print,
 * 	    if the file can not be opened or read, return 0
 * 	    if filename is NULL return 0
 * 	    if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t o_stat, r_stat, w_stat;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL){

		return (0);
	}

	o_stat = open(filename, O_RDONLY);
	r_stat = read(o_stat, buffer, letters);
	w_stat = write(STDOUT_FILENO, buffer, r_stat);

	if (o_stat == -1 || r_stat == -1 || w_stat == -1)
	{

		free(buffer)
		return (0);
	}

	buffer[letters] = '\0';

	free(buffer);
	close(o_stat);

	return(w_stat);

}
