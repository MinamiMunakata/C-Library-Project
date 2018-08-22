/* ************************************ */
/*                                      */
/* vc_bzero.c                           */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_bzero(char *s, int n)
{
    int i;
    i = 0;
    while (*(s + i) && i < n)
    {
        s[i] = 0;
        i++;
    }
}
