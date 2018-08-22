/* ************************************ */
/*                                      */
/* vc_memmove.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void * vc_memmove(void *destination, void *source, size_t n)
{
    char *dest = (char *)destination;
    char *src = (char *)source;
    char *temp = (char *)malloc(n * sizeof(char));
    for (int i = 0; i < n; i++)
    {
        temp[i] = src[i];
    }
    for(int i = 0; i < n; i++)
    {
        dest[i] = temp[i];
    }
    dest[n] = '\0';
    free(temp);
}