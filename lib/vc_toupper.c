/* ************************************ */
/*                                      */
/* vc_toupper.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

char *vc_toupper(char *str) {
    int i;
    int num;
    for (i = 0; *(str + i) != '\0'; i++)
    {
        if (*(str + i) >= 97 && *(str + i) <= 122)
        {
            *(str + i) -= 32; 
        }
    }
    return str;
}
