/* ************************************ */
/*                                      */
/* vc_isprint.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */
#include <stdio.h>

int vc_isprint(char *str) {
    int printable;
    int non_printable;
    int i;
    printable = 1; // printable or empty
    non_printable = 0;
    i = 0;
    while (*(str + i) != '\0')
    {
        if (*(str + i) < 32 || *(str + i) > 126)
        {
            return non_printable;
        }
        i++;
    }
    return printable;
}
