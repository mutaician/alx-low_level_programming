#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 */
void _print_rev_recursion(char *s)
{
    if (*s != '\0') /* recursive case: end of string not reached yet */
    {
        _print_rev_recursion(s + 1); /* recursive call with next character */
        _putchar(*s); /* print current character */
    }
}
