#include "ft_printf.h"

void check_flag(const char *string, va_list args)
{
	while(*string)
	{
		if(*string == '%')
		{
			string++;
			if(*string == 'c')
				p_char(args);
			if(*string == 's')
				p_str(args);
			if(*string == 'p')
				p_pointer(args);
		}	
		else
			write(1, string, 1);
		string++;
	}
	return;
}
int ft_printf(const char *string, ...)
{
	va_list args;

	va_start(args, string);
	check_flag(string, args);
	return 1;
}
