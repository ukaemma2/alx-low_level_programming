#ifndef _FUNCTION_POINTER_H_
#define _FUNCTION_POINTER_H_
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /*_FUNCTION_POINTER_H_*/
