/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 08:15:34 by dalinein          #+#    #+#             */
/*   Updated: 2026/11/02 08:15:37 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_handle_format(char c, va_list *args)
{
	if (c == 'c')
		return (ft_printf_char(va_arg(*args, int)));
	else if (c == 's')
		return (ft_printf_string(va_arg(*args, char *)));
	else if (c == 'u')
		return (ft_printf_unsigned(va_arg(*args, unsigned int)));
	else if (c == 'd' || c == 'i')
		return (ft_printf_number(va_arg(*args, int)));
	else if (c == 'p')
		return (ft_print_pointer(
				(unsigned long long)va_arg(*args, void *)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hex(va_arg(*args, unsigned int), c));
	else if (c == '%')
		return (ft_printf_char('%'));
	return (0);
}

static int	ft_process_format(const char *format, int *i, va_list *args)
{
	int	result;

	if (format[*i] == '%' && format[*i + 1])
	{
		result = ft_handle_format(format[*i + 1], args);
		*i += 2;
	}
	else
	{
		result = write(1, &format[*i], 1);
		(*i)++;
	}
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		result;

	if (!format)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		result = ft_process_format(format, &i, &args);
		if (result == -1)
		{
			va_end(args);
			return (-1);
		}
		count += result;
	}
	va_end(args);
	return (count);
}