#include "ft_printf.h"
void	p_str(va_list args)
{
	int i = 0;
	char *print = va_arg(args, char *);
	
	while(print[i])
	{
		write(1, &print[i], 1);
		i++;
	}
}