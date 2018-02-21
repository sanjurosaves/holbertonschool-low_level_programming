#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_elem(int elem);
void print_elem_hex(int elem);
int is_98(int elem);
int is_strictly_positive(int elem);
int abs_is_98(int elem);
int int_index(int *array, int size, int (*cmp)(int));
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
