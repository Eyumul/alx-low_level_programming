#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase letters
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i <= 9; i++)
{
char c = 97;
while (c <= 122)
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
