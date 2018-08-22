/* ************************************ */
/*                                      */
/* vc_strjoin.c                         */
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

char *vc_strjoin(char const *s1, char const *s2)
{
    char *src1 = (char *)s1;
    char *src2 = (char *)s2;
    int size = vc_strlen(src1) + vc_strlen(src2) + 1;
    char *new = (char *)malloc(sizeof(char) * size);
    int i = 0;
    while (i < size)
    {
        if(i < vc_strlen(src1)) new[i] = src1[i];
        else new[i] = src2[i - vc_strlen(src1)];
        i++;
    }
    new[size] = '\0';
    return new;
}
