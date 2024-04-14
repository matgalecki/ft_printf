/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 19:02:50 by mgalecki          #+#    #+#             */
/*   Updated: 2024/03/30 19:02:54 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_printf_char(unsigned long n)
{
}

int	ft_printf_ptr(unsigned long ptr)
{
	unsigned long	n;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (0);
	}
	n = (unsigned long)ptr;
	write(1, "0x", 2);
	return (2 + ft_printf_char(n));
}