/* ************************************ */
/*                                      */
/* vc_putendl.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <unistd.h>

static int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i) != '\0')
    {
        i++;
    }
    return i;
}

void vc_putendl(char const *s)
{
    char l = '\n';
    void *nl = &l;
    write(1, s, vc_strlen((char *)s));
    write(1, nl, sizeof(char));
}

