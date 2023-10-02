#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include "main.h"
#include <stdarg.h>
#define BUFFER_SIZE 1024
/**
 * error_exit - main function
 * @code: parameter 1
 * @format: parameter 2
 * Return: 0
 */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);

	dprintf(STDERR_FILENO, format, args);

	va_end(args);

	exit(code);
}
