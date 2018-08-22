/* ************************************ */
/*                                      */
/* vc_strclr.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

void vc_strclr(char *s)
{
    int i;
    i = 0;
    while(*(s + i))
    {
        s[i] = '\0';
        i++;
    }
}
