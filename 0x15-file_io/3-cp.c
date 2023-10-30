#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * error_and_exit - Print an error message
 * @code: The exit code
 * @message: The error message forng
 * @arg: Argument to be inserted g
 */
void error_and_exit(int code, const char *message, const char *arg)
{
	dprintf(2, message, arg);
	exit(code);
}
/**
 * main - Copyent of one file to another
 * @argc: The number of coe arguments
 * @argv: An array ofand-line arguments
 * Return: 0 on success, or an erro
 */
int main(int argc, char *argv[])
{
	 const char *file_from = argv[1];
	 const char *file_to = argv[2];
	 char buffer[1024];
	 ssize_t bytes_read;
	 ssize_t bytes_written = write(fd_to, buffer, bytes_read);

	if (argc != 3)
	{
		error_and_exit(97, "Usage: cp file_from file_to\n", "");
	}
	if (fd_from == -1)
	{
		error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}
	if (fd_to == -1)
	{
		error_and_exit(99, "Error: Can't write to file %s\n", file_to);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (bytes_written == -1)
		{
			error_and_exit(99, "Error: Can't write to file %s\n", file_to);
		}
	}
	if (bytes_read == -1)
	{
		error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}
	if (close(fd_from) == -1)
	{
		error_and_exit(100, "Error: Can't close fd %d\n", fd_from);
	}
	if (close(fd_to) == -1)
	{
		error_and_exit(100, "Error: Can't close fd %d\n", fd_to);
	}
	return (0);
}


