/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hescoval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:23:23 by hescoval          #+#    #+#             */
/*   Updated: 2023/10/12 09:23:24 by hescoval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *string, ...);
void	p_char(va_list args, int *printed);
void	p_str(va_list args, int *printed);
void	p_hex(va_list args, int *printed, char flag);
void	p_deci(va_list args, int *printed, char flag);
void	p_module(int *printed);

#endif
