/* ************************************ */
/*                                      */
/* vc_putchar.c                         */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

static int my_pow(int a, int b)
{
    if (b == 0) return 1;
    a *= my_pow(a, b -1);
    return a;
}

char *vc_itoa(int n)
{
    int digit;
    int negative_flag;
    int i;

    digit = 0; /* digit = how many digits n has.*/
    negative_flag = 0;
    if (n == 0) digit = 1;
    if (n < 0) 
    {
        n = -n;
        negative_flag = 1;
    }
    while (my_pow(10, digit) <= n)
    {
        digit++;
    }
    char *a = (char *)malloc((digit + negative_flag) * sizeof(char) + 1);
    if(a == NULL) return NULL;
    a[digit + negative_flag] = '\0';
    i = 0;
    while (i < digit)
    {
        if (n < 10)
        {
            a[i + negative_flag] = n + '0';
            i++;
        }
        else
        {
            a[i + negative_flag] = (n / my_pow(10, digit - 1 - i)) + '0';
            n = n % my_pow(10, digit - 1 - i);
            i++; 
        }
    }
    if (negative_flag) a[0] = '-';
    return a;

}
