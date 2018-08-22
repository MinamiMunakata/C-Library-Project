/* ************************************ */
/*                                      */
/* vc_memdel.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void vc_memdel(void **ap)
{
    if (*ap != NULL)
    {
        free(*ap);
        *ap = NULL;
    }
}

