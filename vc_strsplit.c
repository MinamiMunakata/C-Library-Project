/* ************************************ */
/*                                      */
/* vc_strsplit.c                        */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include <stdlib.h>


static int vc_strlen(char *str) {
    int i = 0;
    while(*(str + i))
    {
        i++;
    }
    return i;
}

static void my_trim(char *s, char c)
{
    int len = vc_strlen(s);
    int i = 0;
    // trim from last;
    while(len - i - 1 > 0)
    {
        if(s[len - i - 1] != c) break;
        i++;
    }
    s[len - i] = '\0';
    // trim at the beggining
    while (s)
    {
        if (*s != c) break;
        s++;
    }
}

static int my_count_row(char *s, int len, char c)
{
    // count row
    int row = 0;
    int letter = 0;
    int i = 0;
    while(i <= len)
    {
        letter++;
        if (*(s + i) == c || *(s + i) == '\0')
        {
            if(letter > 1)
            {
                row++;
            }
            letter = 0;
        }
        i++;
    }    
    return row;
}


char **vc_strsplit(char const *src, char c) {
    char *s = (char *)src;
    my_trim(s, c);
    int len = vc_strlen(s);
    // allocate memory
    int size = my_count_row(s, len, c);
    char **container = (char **)malloc(sizeof(char *) * (size + 1));
    if (container == NULL) return NULL;
    container[size] = 0;
    int row = 0;
    int col = 0;
    int i = 0;
    while(i <= len)
    {
        if (*(s + i) != c && *(s + i))
        {
            col++;
        }
        else
        { 
            if (col > 0)
            {
                char *word = (char *)malloc(sizeof(char) * (col + 1));
                if (word == NULL) return NULL;
                word[col] = '\0';
                for (int j = 0; j < col; j++)
                {
                    word[j] = *(s + i - col + j);
                }
                container[row] = word;
                row++;
            }
            col = 0;
        }
        i++;
    }
    return container;

}
