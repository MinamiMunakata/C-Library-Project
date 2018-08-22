/* ************************************ */
/*                                      */
/* vc_memalloc.c                        */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void * vc_memalloc(size_t size)
{
    void *area = malloc(size);
    if (area == NULL) return NULL;
    int i;
    i = 0;
    while (i < size)
    {
        ((char *)area)[i] = 0;
        i++;
    }    
    return area;
}
