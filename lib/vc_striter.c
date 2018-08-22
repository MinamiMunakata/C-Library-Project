/* ************************************ */
/*                                      */
/* vc_striter.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_striter(char *s, void (*f)(char *))
{
    int i;
    i = 0;
    while(*(s + i))
    {
        f(s + i);
        i++;
    }
}

