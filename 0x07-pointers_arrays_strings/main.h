#ifndef MAIN_H
#define MAIN_H

void print_chessboard(char (*a)[8]);
char *_memset(char *s, char b, unsigned int n);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
char *_strstr(char *haystack, char *needle);
unsigned int _strspn(char *s, char *accept);
void simple_print_buffer(char *buffer, unsigned int size);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strpbrk(char *s, char *accept);
char *_strchr(char *s, char c);
int _putchar(char c);

#endif /*MAIN_H*/
