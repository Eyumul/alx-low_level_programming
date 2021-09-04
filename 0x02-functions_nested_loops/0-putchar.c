#include "main.h"
/**
 * main - checks for uppercase letters
 *
 * Return: always 0.
 */
int main()
{
int i = 0;
char c;
char s[] = "_putchar ";
while (i <= 9)
{
c = s[i];
_putchar(c);
i++;
}
_putchar('\n');
return (0);
}
