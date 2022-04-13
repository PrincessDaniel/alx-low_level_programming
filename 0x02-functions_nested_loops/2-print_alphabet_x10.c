#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
int i = 10;
char c;

while (i <= 9)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}

i++;

_putchar('\n');
}
}
