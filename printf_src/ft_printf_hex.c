/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 08:17:05 by dalinein          #+#    #+#             */
/*   Updated: 2026/11/02 08:17:08 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_hex(unsigned int n, char format)
{
	int		result;
	int		count;
	char	*base;

	count = 0;
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
	{
		result = ft_print_hex(n / 16, format);
		if (result == -1)
			return(-1);
		count += result;
	}

	result = ft_printf_char(base[n % 16]);
	if (result == -1)
			return(-1);
	return (count + result);
}
