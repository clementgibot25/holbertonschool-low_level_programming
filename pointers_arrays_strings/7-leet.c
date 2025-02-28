#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: The encoded string.
 */
char *leet(char *s)
{
    int i = 0; /* parcoureur de tableau */
    int j; /* boucler tableau */
    char min[] = {'a', 'e', 'o', 't', 'l'};
    char maj[] = {'A', 'E', 'O', 'T', 'L'};
    char num[] = {4, 3, 0, 7, 1};

    while (s[i] != '\0')
    {
        for (j = 0; j < 5; j++)
        {
            if (s[i] == min[j] || s[i] == maj[j])
            {
                s[i] = num[j] + '0';
            }
        }
        i++;
    }
    return (s);
}
