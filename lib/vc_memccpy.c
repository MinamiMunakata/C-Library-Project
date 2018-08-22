/* ************************************ */
/*                                      */
/* vc_memccpy.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <string.h>

void * vc_memccpy(void * destination, void * source, int c, size_t num)
{
    int i;
    i = 0;
    char *dest = (char *)destination;
    char *src = (char *)source;
    while (i < num)
    {
        if (*(src + i) == c)
        {
            *(dest + i) = *(src + i);
            i++;
            break;
        }
        else
        {
            *(dest + i) = *(src + i);
            i++;
        }
    }
    *(dest + i) = '\0';
}
