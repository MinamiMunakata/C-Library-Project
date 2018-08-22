/* ************************************ */
/*                                      */
/* vc_putchar.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <unistd.h>
#include <string.h>

void vc_putchar(char c)
{
    void *myC = &c;
    write(1, myC, sizeof(char));
}
