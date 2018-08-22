/* ************************************ */
/*                                      */
/* vc_strtrim.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>
#define SPC 32
#define TAB 9
#define NL 10

static int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i))
    {
        i++;
    }
    return i;
}

char *vc_strtrim(char const *s)
{
    char *src = (char *)s;
    int end = 0;
    int len = vc_strlen(src);
  
    while(len - end - 1 >= 0)
    {
        if (*(src + len - end - 1) == SPC || 
            *(src + len - end - 1) == TAB || *(src + len - end - 1) == NL) end++;           
        else
        {
            *(src + len - end) = '\0';
            break;
        }
    }
    while (*(src))
    {
        if (*src == SPC || *src == TAB || *src == NL) src++;
        else break;
    }
    
    int size = vc_strlen(src);
    int i = 0;
    char *trimmed = (char *)malloc(sizeof(char) * (size + 1));
    if (trimmed == NULL) return NULL;
    while (*(src) && i < size)
    {
        *(trimmed + i) = *(src + i);
        i++;
    }
    trimmed[size] = '\0';
    return trimmed;
}
