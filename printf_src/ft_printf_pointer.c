/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 08:35:57 by dalinein          #+#    #+#             */
/*   Updated: 2026/11/09 08:36:03 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_put_ptr_hex(unsigned long long ptr)
{
	int	count;
	int	result;

	count = 0;
	if (ptr >= 16)
	{
		result = ft_put_ptr_hex(ptr / 16);
		if (result == -1)
			return (-1);
		count += result;
	}
	result = ft_printf_char("0123456789abcdef"[ptr % 16]);
	if (result == -1)
		return (-1);
	return (count + result);
}

int	ft_print_pointer(unsigned long long ptr)
{
	int	result;

	if (!ptr)
		return (write(1, "(nil)", 5));
	if (write(1, "0x", 2) == -1)
		return (-1);
	result = ft_put_ptr_hex(ptr);
	if (result == -1)
		return (-1);
	return (result + 2);
}
