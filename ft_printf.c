/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 22:47:03 by mgalecki          #+#    #+#             */
/*   Updated: 2024/04/20 22:47:04 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_what_format(char c, va_list arg)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = len + ft_printf_char(va_arg(arg, int));
	else if (c == 's')
		len = len + ft_printf_str(va_arg(arg, char *));
	else if (c == 'p')
		len = len + ft_printf_ptr(va_arg(arg, unsigned long));
	else if (c == 'd' || c == 'i')
		len = len + ft_printf_nbr(va_arg(arg, int));
	else if (c == 'u')
		len = len + ft_printf_un_nbr(va_arg(arg, unsigned int));
	else if (c == 'x')
		len = len + ft_printf_hex_low(va_arg(arg, unsigned int));
	else if (c == 'X')
		len = len + ft_printf_hex_upp(va_arg(arg, unsigned int));
	else if (c == '%')
	{
		write(1, "%", 1);
		len = len + 1;
	}
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		len;

	va_start(arg, s);
	len = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			len = len + ft_what_format(*s, arg);
			s++;
		}
		else
		{
			write(1, s, 1);
			len = len + 1;
			s++;
		}
	}
	va_end(arg);
	return (len);
}
