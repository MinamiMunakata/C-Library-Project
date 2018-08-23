/* ************************************ */
/*                                      */
/* libvc.h                              */
/*                                      */
/* By: Minami                           */
/*                                      */
/* ************************************ */
#include <string.h>

/* part 1 */
int vc_atoi(char *str);
void vc_bzero(char *s, int n);
int vc_isalnum(int ch);
int vc_isalpha(int ch);
int vc_isascii(unsigned int ch);
int vc_isdigit(int ch);
int isprint(char *str);
void * vc_memccpy(void * destination, void * source, int c, size_t num);
void *vc_memchr(void *str, int c, size_t n);
int vc_memcmp(void *str1, void *str2, size_t n);
void * vc_memcpy(void * destination, void * source, size_t num);
void * vc_memmove(void *destination, void *source, size_t n);
void *vc_memset(void *s, int c, size_t n);
void vc_puts(char *str);
char *vc_strcat(char *dest, char *src);
char *vc_strchr(char *str, int c);
int vc_strcmp(char *s1, char *s2);
char *vc_strcpy(char *dest, char *src);
char *vc_strdup(char *src);
unsigned int vc_strlcat(char *dest, char *src, unsigned int size);
int vc_strlen(char *str);
char *vc_strncat(char *dest, char *src, int n);
int vc_strncmp(char *s1, char *s2, unsigned int num);
char *vc_strncpy(char *dest, char *src, unsigned int n);
char *vc_strnstr(char *str, char *to_find, unsigned int num);
char *vc_strrchr(char *str, int c);
char *vc_strstr(char *str, char *to_find);
char *vc_tolower(char *str);
char *vc_toupper(char *str);

/* part 2 */
char *vc_itoa(int n);
void * vc_memalloc(size_t size);
void vc_memdel(void **ap);
void vc_putchar(char c);
void vc_putendl(char const *s);
void vc_putnbr(int n);
void vc_strclr(char *s);
void vc_strdel(char **as);
void vc_striter(char *s, void (*f)(char *));
char *vc_strjoin(char const *s1, char const *s2);
char *vc_strmap(char const *s, char (*f)(char));
char *vc_strnew(size_t size);
char **vc_strsplit(char const *src, char c);
char *vc_strsub(char const *s, size_t start, size_t len);
char *vc_strtrim(char const *s);







