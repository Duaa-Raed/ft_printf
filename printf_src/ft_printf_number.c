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
	long	number;

	count = 0;
	number = n;
	if (number < 0)
	{
		count += write(1, "-", 1);
		number = -number;
	}
	if (number >= 10)
		count += ft_printf_number(number / 10);
	count += ft_printf_char((number % 10) + '0');
	return (count);
}
