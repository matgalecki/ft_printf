/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:21:27 by mgalecki          #+#    #+#             */
/*   Updated: 2024/03/30 20:21:34 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_printf_char(str[i]);
		i++;
	}
	return (i);
}
/* 
int main ()
{
	char *str = "saddsasd";
	ft_printf_str(str);
	return (0);
}
*/
