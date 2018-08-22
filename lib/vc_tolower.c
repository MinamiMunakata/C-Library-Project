/* ************************************ */
/*                                      */
/* vc_tolower.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_tolower(char *str) {
    int i;
    int num;
    for (i = 0; *(str + i) != '\0'; i++)
    {
        if (*(str + i) >= 65 && *(str + i) <= 90)
        {
            *(str + i) += 32; 
        }
    }
    return str;
}
