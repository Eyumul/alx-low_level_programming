#include "main.h"
/**
 * _strlen - writes the character c to stdout
 * @s: holds integer
 *
 * Return: On success 1.
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i))
i++;
return (i);
}
