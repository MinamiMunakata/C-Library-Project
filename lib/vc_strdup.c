/* ************************************ */
/*                                      */
/* vc_strdup.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

static int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i) != '\0')
    {
        i++;
    }
    return i;
}

static char *vc_strcpy(char *dest, char *src) {
    int src_len;
    int dest_len;
    int i;
    int j;
    i = 0;
    j = 0;
    src_len = vc_strlen(src);
    dest_len = vc_strlen(dest);
    while (*(src + i) != '\0')
    {
        *(dest + i) = *(src + i);
        i++;
    }
    while (*(dest + j + src_len) != '\0')
    {
        *(dest + j + src_len) = '\0';
        j++;
    }
    return dest;
}

char *vc_strdup(char *src) {
    char *newstr;
    int size;
    size = vc_strlen(src) + 1;
    if (src != NULL)
    {
        newstr = (char *)malloc(size);
        newstr[size - 1] = '\0';
        newstr = vc_strcpy(newstr, src);
    }
    return newstr;
}
