#include "main.h"
/**
 * swap_int - writes the character c to stdout
 * @a: holds integer
 * @b: holds integer
 *
 * Return: On success 1.
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
