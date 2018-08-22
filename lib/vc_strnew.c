/* ************************************ */
/*                                      */
/* vc_strnew.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

char *vc_strnew(size_t size)
{
    char *new = (char *)malloc(sizeof(char) * size);
    for (int i = 0; i < size; i++)
    {
        new[i] = '\0';
    }
    return new;
}

