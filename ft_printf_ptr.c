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

static int	ft_hex(unsigned long long int value)
{
	char	result[20];
	char	*pref;
	char	*rest;
	int		len;
	int		i;

	pref = "0x";
	rest = "0123456789abcdef";
	i = sizeof(result) - 2;
	if (value == 0)
	{
		result[i] = '\0';
		i--;
	}
	while (result[i])
	{
	}
}

int	ft_printf_ptr(char *str)
{
}