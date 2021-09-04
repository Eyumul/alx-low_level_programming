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
char a[21] = "01234567891011121314";
int j;
int i;
for (i = 0; i <= 9; i++)
{
for (j = 0; j < 20; j++)
{
c = a[j];
_putchar(c);
}
_putchar('\n');
}
}
