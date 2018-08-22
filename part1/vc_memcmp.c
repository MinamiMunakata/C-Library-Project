/* ************************************ */
/*                                      */
/* vc_memcmp.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_memcmp(void *str1, void *str2, size_t n){
    char *s1 = (char *)str1;
    char *s2 = (char *)str2;
    int i;
    i = 0;
    while ((*(s1 + i) != '\0' || *(s2 + i) != '\0') && i < n)
    {
        if (*(s1 + i) != *(s2 + i)) return *(s1 + i) - *(s2 + i);
        i++;
    }
    return *(s1 + i) - *(s2 + i);
}