#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints form 0 ot 9
 *
 * Return: always 0.
 */
void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '1'; c++)
{
_putchar(c);
}
for (c = '3'; c <= '3'; c++)
{
_putchar(c);
}
for (c = '5'; c <= '9'; c++)
{
_putchar(c);
}
printf("\n");
}
