/* ************************************ */
/*                                      */
/* vc_puts.c                            */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

void vc_puts(char *str) {
    int i = 0;
    while(*(str + i))
    {
        putchar(*(str + i));
        i++;
    }
}
