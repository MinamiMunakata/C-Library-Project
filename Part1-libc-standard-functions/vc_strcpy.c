/* ************************************ */
/*                                      */
/* vc_strcpy.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

static int vc_strlen(char *str) {
    int i;
    i = 0;
    while(*(str + i) != '\0')
    {
        i++;
    }
    return i;
}

char *vc_strcpy(char *dest, char *src) {
    int size_of_src;
    int i;
    int j;
    i = 0;
    j = 0;
    size_of_src = vc_strlen(src);
    while (*(src + i) != '\0')
    {
        *(dest + i) = *(src + i);
        i++;
    }
    while (*(dest + j + size_of_src) != '\0')
    {
        *(dest + j + size_of_src) = '\0';
        j++;
    }
    return dest;
}