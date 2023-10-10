#include "ft_printf.h"

void	p_char(va_list args)
{
	unsigned char print = va_arg(args, int);
	write(1, &print, 1);
}