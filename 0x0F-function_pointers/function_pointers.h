#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>
void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));

#endif
