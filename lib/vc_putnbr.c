/* ************************************ */
/*                                      */
/* vc_putnbr.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <unistd.h>

void vc_putnbr(int n)
{
    char c = n + '0';
    void *num = &c;
    write(1, num, sizeof(char));
}


