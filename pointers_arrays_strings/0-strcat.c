#include "main.h"

char *_strcat(char *dest, char *src)
{
    int i = 0;

    // Move to the end of str1
    while (dest[i] != '\0')
        i++;

    // Copy characters from str2 to str1
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Null-terminate the concatenated string
    dest[i] = '\0';

    return (dest);
}
