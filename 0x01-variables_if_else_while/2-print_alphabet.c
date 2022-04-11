#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabeths
 * Returns: Always 0 (Success)
 */
int main(void)
{
char A;

for (A = 'a'; A <= 'z'; A++)
putchar(A);

putchar('\n');

return (0);
}
