#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int _string(va_list args);
int _char(va_list chars);
int _percent(void);
int _myprintf(const char *format, ...);
int num_print(int arg);
int print_num(va_list n);

#endif /* _MAIN_H */
