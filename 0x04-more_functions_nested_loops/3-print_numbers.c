#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints form 0 ot 9
 *
 * Return: always 0.
 */
void print_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
printf("\n");
}
