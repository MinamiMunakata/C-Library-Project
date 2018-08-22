/* ************************************ */
/*                                      */
/* vc_strcmp.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_strcmp(char *s1, char *s2) {
    int less;
    int equal;
    int greater;
    int i;
    less = -1;
    equal = 0;
    greater = 1;
    i = 0;
    while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
    {
        if (*(s1 + i) > *(s2 + i)) return greater;
        if (*(s1 + i) < *(s2 + i)) return less;
        i++;
    }
    return equal;
}
