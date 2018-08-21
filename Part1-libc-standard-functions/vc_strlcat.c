/* ************************************ */
/*                                      */
/* vc_strlcat.c                         */
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

static char *my_strncat(char *dest, int size_dest, char *src, int size_src, int n) {
    int i;
    i = 0;
    if (n > size_src) n = size_src;
    while (i < n)
    {
        *(dest + size_dest + i) = *(src + i);
        i++; 
    }
    *(dest + size_dest + size_src) = '\0';
    return dest;
}

unsigned int vc_strlcat(char *dest, char *src, unsigned int size) {
    int size_dest;
    int size_src;
    int i;
    size_dest = vc_strlen(dest);
    size_src = vc_strlen(src);
    i = 0;
    if (size - size_dest - 1 > 0)
    {
        my_strncat(dest, size_dest, src, size_src, size - size_dest);
    }
    if ((unsigned int)size_dest + (unsigned int)size_src > size) return size;
    return (unsigned int)size_dest + (unsigned int)size_src;
}

/*
unsigned int vc_strlcat(char *dest, char *src, unsigned int size)
{
    return vc_strlen(dest) + vc_strlen(src);
}
*/