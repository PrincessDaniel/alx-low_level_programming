#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabeths backwards
 * Return: Always 0 (Success)
 */
int main(void)
{
char A;

for (A = 'z'; A >= 'a'; A--)
{
putchar(A);
}
putchar('\n');

return (0);
}
