/* ************************************ */
/*                                      */
/* vc_strmap.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>

static int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i) != '\0')
    {
        i++;
    }
    return i;
}

char *vc_strmap(char const *s, char (*f)(char))
{
    int size = vc_strlen((char *)s);
    char *str = (char *)malloc(sizeof(char) * size);
    if (str == NULL) return NULL;
    char *temp = (char *)s;
    int i = 0;
    while(*(temp + i))
    {
        *(str + i) = f(*(temp + i));
        i++;
    }
    return str;
}
