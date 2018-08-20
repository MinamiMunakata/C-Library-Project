/* ************************************ */
/*                                      */
/* vc_isalnum.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_isalnum(int ch) {
    int alnum;
    int non_alnum;
    alnum = 1; // alnum or empty
    non_alnum = 0;
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) return alnum;
    if (ch >= 48 && ch <= 57) return alnum;
    return non_alnum;
}

