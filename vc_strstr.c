/* ************************************ */
/*                                      */
/* vc_strstr.c                          */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>

static int vc_strlen(char *str) {
    int i;
    i = 0;
    while(*(str + i))
    {
        i++;
    }
    return i;
}

static int check_if_same(char *start_of_str, char *to_find) {
    int i;
    i = 0;
    while (*(to_find + i) != '\0')
    {
        if (*(start_of_str + i) != *(to_find + i)) return 0;
        i++;
    }
    return 1;
}

char *vc_strstr(char *str, char *to_find) {
    int size_str;
    int size_find;
    int i;
    size_str = vc_strlen(str);
    size_find = vc_strlen(to_find);
    i = 0;
    while (*(str + i) != '\0')
    {
        if (*to_find == *(str + i) && size_str - i >= size_find)
        {
            if (check_if_same(str + i, to_find)) return str + i;
        }
        i++;
    }
    str = NULL;
    return str;
}
