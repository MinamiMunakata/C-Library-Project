/* ************************************ */
/*                                      */
/* vc_memcpy.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

void * vc_memcpy(void * destination, void * source, size_t num)
{
    int i;
    i = 0;
    char *dest = (char *)destination;
    char *src = (char *)source;
    while (i < num)
    {
        *(dest + i) = *(src + i);
        i++;
    }
    *(dest + num) = '\0';
}
