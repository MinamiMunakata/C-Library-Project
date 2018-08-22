/* ************************************ */
/*                                      */
/* vc_memset.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

void *vc_memset(void *s, int c, size_t n)
{
    int i;
    i = 0;
    while (*((char *)s + i) && i < n)
    {
        ((char *)s)[i] = c;
        i++;
    }
}
