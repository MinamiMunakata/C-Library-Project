/* ************************************ */
/*                                      */
/* MAIN.c                               */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include "libvc.h"

void vc_puts(char *str);
char *vc_toupper(char *str);

int main(int argc, char const *argv[])
{
    char str[] = "hello, world";

    vc_puts(vc_toupper(str));
    
    return 0;
}
