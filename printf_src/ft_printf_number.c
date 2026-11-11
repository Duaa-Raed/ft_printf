/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 08:16:50 by dalinein          #+#    #+#             */
/*   Updated: 2026/11/02 08:16:53 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf_number(int n)
{
	int		count;
	int		result;
	long	number;

	count = 0;
	number = n;
	if (number < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		count++;
		number = -number;
	}
	if (number >= 10)
	{
		result = ft_printf_number(number / 10);
		if (result == -1)
			return (-1);
		count += result;
	}
	result = ft_printf_char((number % 10) + '0');
	if (result == -1)
		return (-1);
	return (count + result);
}
