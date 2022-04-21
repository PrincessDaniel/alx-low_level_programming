#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: pointer char
 * Return: void
 */

void puts_half(char *str)
{
int i, j;
i = 0;
while (str[i])
i++;
j = i / 2;
if (i % 2)
j += 1;
while (j < i)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
return;
}