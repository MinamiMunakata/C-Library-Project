/* ************************************ */
/*                                      */
/* vc_strrchr.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_strrchr(char *str, int c)
{
    int i;
    i = 0;
    char *ptr;
    ptr = NULL;
    while (*(str + i))
    {
        if(*(str + i) == c) ptr = (str + i);       
        i++;
    }
    return ptr;
}
