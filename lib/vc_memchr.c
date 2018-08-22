/* ************************************ */
/*                                      */
/* vc_memchr.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

void *vc_memchr(void *str, int c, size_t n)
{
    char *test = (char *)str;
    int i;
    i = 0;
    while (*((char *)str + i) && i < n)
    {
        if(*((char *)str + i) == c)
        {
            return ((char *)str + i);
        }
        i++;
    }
    return NULL;
}