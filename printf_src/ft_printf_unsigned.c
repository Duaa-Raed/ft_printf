/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 08:37:21 by dalinein          #+#    #+#             */
/*   Updated: 2026/11/09 08:37:26 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf_unsigned(unsigned int n)
{
	int result;
	int	count;

	count = 0;
	if (n >= 10)
	{
		result = ft_printf_unsigned(n / 10);
		if (result == -1)
			return (-1);
		count += result;
	}
	result = ft_printf_char((n % 10) + '0');
	if (result == -1)
			return (-1);
	return (count + result);
}
