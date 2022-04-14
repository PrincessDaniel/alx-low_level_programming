#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: integer to be computed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last = n % 10;
if (n < 0)
last = * -1;
_putchar(last + '0');
return (last);
}
