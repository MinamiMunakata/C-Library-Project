/* ************************************ */
/*                                      */
/* vc_strdel.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

void vc_strdel(char **as)
{
    if (*as != NULL)
    {
        free(*as);
        *as = NULL;
    }
}

