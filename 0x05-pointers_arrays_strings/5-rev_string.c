#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
char *start, *end, c;
int i, j;
int length = 0;

for (i = 0; s[i]; i++)
{
length++;
}

j = length;

start = s;
end = s;

for (i = 0; i < j - 1; i++)
{
end++;
}

for (i = 0; i < j / 2; i++)
{
c = *end;
*end = *start;
*start = c;

start++;
end--;
}
}
