#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);

#endif
