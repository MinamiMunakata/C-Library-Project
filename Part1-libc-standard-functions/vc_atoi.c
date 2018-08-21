/* ************************************ */
/*                                      */
/* vc_atoi.c                            */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

static int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i))
    {
        i++;
    }
    return i;
}

static int my_pow(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    a *= my_pow(a, b -1);
    return a;
}

int vc_atoi(char *str) {
    int size = vc_strlen(str);
    int i = 0;
    int num = 0;
    while(*(str + i) != '\0')
    {
        num += my_pow(10, size - i - 1) * (*(str + i) - 48);
        i++;
    }
    return num;
}
