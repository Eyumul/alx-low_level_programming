#include "main.h"
/**
 * print_last_digit - checks for uppercase letters
 * @n: character to check
 *
 * Return: always 0.
 */
int print_last_digit(int n)
{
int l, p;
l = n % 10;
if (l < 0)
l = -l;
p = '0' + l;
_putchar(p);
return (l);
}
