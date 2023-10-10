#include "ft_printf.h"

static void	putnbr_hexa(unsigned long n, char *hex)
{
	char print;
	if(n >= 16)
	{
		putnbr_hexa(n / 16, hex);
		print = n % 16 + 48;
		write(1, &print, 1);
	}
	if(n < 16)
	{
		print = hex[(n % 16)];
		write(1, &print, 1);
	}
}
void p_pointer(va_list args)
{
	char *hexa = "0123456789abcdef";
	unsigned long pointer = va_arg(args, unsigned long);
	write(1, "0x", 2);
	putnbr_hexa(pointer, hexa);
}