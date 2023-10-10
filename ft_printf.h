#ifndef FTPRINTF_H
# define FTPRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *string, ...);
void	p_char(va_list args);
void	p_str(va_list args);
void	p_pointer(va_list args);

#endif