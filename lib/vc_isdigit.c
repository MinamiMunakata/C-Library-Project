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
    num = 1;
    non_num = 0;
    if (ch >= 48 && ch <= 57) return num;
    return non_num;
}

