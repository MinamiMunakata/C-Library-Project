/* ************************************ */
/*                                      */
/* vc_strncpy.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strncpy(char *dest, char *src, unsigned int n) {
    int i;
    i = 0;
    while (i < n)
    {
        if (*(dest + i) == '\0') break;
        *(dest + i) = *(src + i);
        i++;
    }
    i = n;
    while (*(dest + i) != '\0')
    {
        *(dest + i) = '\0';
        i++;
    }
    return dest;
}
