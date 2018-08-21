/* ************************************ */
/*                                      */
/* vc_strncat.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

static int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i) != '\0')
    {
        i++;
    }
    return i;
}

char *vc_strncat(char *dest, char *src, int n) {
    int size_dest;
    int size_src;
    int i;
    size_dest = vc_strlen(dest);
    size_src = vc_strlen(src);
    i = 0;
    while (i < n)
    {
        *(dest + size_dest + i) = *(src + i);
        i++; 
    }
    *(dest + size_dest + size_src) = '\0';
    return dest;
}

