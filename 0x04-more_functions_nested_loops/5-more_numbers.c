#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints form 0 ot 14
 *
 * Return: always 0.
 */
void more_numbers(void)
{
char c;
int i;
for (i = 0; i <= 9; i++)
{
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
for (c = '0'; c <= '4'; c++)
{
_putchar('1');
_putchar(c);
}
printf("\n");
}
}
