/* ************************************ */
/*                                      */
/* isdigit.c                            */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_isdigit(int ch) {
    int num;
    int non_num;
    num = 1; // num or empty
    non_num = 0;
    if (ch < 48 || ch > 57) return non_num;
    return num;
}

