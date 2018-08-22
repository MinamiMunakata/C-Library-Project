/* ************************************ */
/*                                      */
/* vc_strncmp.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_strncmp(char *s1, char *s2, unsigned int num) {
    int less;
    int equal;
    int greater;
    int i;
    less = -1;
    equal = 0;
    greater = 1;
    i = 0;
    while ((*(s1 + i) || *(s2 + i)) && i < num)
    {
        if (*(s1 + i) > *(s2 + i)) return greater;
        if (*(s1 + i) < *(s2 + i)) return less;
        i++;
    }
    return equal;
}
