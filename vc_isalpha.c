/* ************************************ */
/*                                      */
/* vc_isalpha.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

int vc_isalpha(int ch) {
    int alpha;
    int non_alpha;
    alpha = 1; // alpha or empty
    non_alpha = 0;
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) return alpha;
    return non_alpha;
}


