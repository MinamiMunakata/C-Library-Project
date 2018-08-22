/* ************************************ */
/*                                      */
/* vc_strsub.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

char *vc_strsub(char const *s, size_t start, size_t len)
{
    char *src = (char *)s;
    char *new = malloc(sizeof(char) * (len + 1));
    if (new == NULL) return NULL;
    *(new + len) = '\0';
    for(int i = 0; i < len; i++)
    {
        *(new + i) = *(src + i + start);
    }
    return new;
}
