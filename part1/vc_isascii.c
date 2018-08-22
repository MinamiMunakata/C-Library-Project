/* ************************************ */
/*                                      */
/* vc_isascii.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_isascii(unsigned int ch)
{
    if (ch >= 0 && ch <= 127) return 1;
    return 0;
}
