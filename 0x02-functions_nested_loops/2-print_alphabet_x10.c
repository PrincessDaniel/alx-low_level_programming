#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, followed by a new line.
 */

void print_alphabet_x10(void)
{
char c;
int i = 10;

while (i <= 9)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}

i++;
}
_putchar('\n');
}
