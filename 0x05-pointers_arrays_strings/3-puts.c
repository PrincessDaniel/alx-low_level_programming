#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @c: character to print
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
