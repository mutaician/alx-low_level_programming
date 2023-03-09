/* wildcmp.c */
#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if they can be considered
 * identical, otherwise return 0.
 * @s1: the first string to compare
 * @s2: the second string to compare (can contain the special character '*')
 *
 * Return: 1 if s1 and s2 are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
    /* Case 1: both strings are empty */
    if (*s1 == '\0' && *s2 == '\0')
        return (1);

    /* Case 2: s2 has a '*' character */
    if (*s2 == '*')
    {
        /* Skip consecutive '*' characters */
        while (*(s2 + 1) == '*')
            s2++;

        /* If s2 ends with '*', s1 matches regardless of its length */
        if (*(s2 + 1) == '\0')
            return (1);

        /* Try to match s1 with s2 without the first '*' character */
        while (*s1 != '\0')
        {
            if (wildcmp(s1, s2 + 1))
                return (1);
            s1++;
        }
    }

    /* Case 3: current characters match, continue comparing */
    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));

    /* Case 4: no match found */
    return (0);
}
