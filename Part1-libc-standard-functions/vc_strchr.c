/* ************************************ */
/*                                      */
/* vc_strchr.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strchr(char *str, int c)
{
    int i;
    i = 0;
    while (*(str + i))
    {
        if(*(str + i) == c) return (str + i);       
        i++;
    }
    return NULL;
}

