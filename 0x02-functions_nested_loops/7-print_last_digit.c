#include "main.h"
/**
 * print_last_digit - checks for uppercase letters
 * @n: character to check
 *
 * Return: always 0.
 */
int print_last_digit(int n)
{
int l;
l = n % 10;
if (l < 0)
{
l *= -1;
return(l);
}
else
{
return (l);
}
}
