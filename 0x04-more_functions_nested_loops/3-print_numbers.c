#include "main.h"
/**
 * print_numbers - prints form 0 ot 9
 *
 * Return: always 0.
 */
void print_numbers(void)
{
char c;
int i;
for (i = 0; i < 10; i++)
{
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
