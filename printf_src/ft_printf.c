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

static int ft_handle_format(char c, va_list args)
{
	unsigned long long ptr;
    if(c == 'c')
        return(ft_printf_char(va_arg(args, int)));
    else if (c == 's')
        return(ft_printf_string(va_arg(args, char *)));
	else if (c == 'u')
    	return (ft_printf_unsigned(va_arg(args, unsigned int)));
    else if (c == 'd' || c == 'i')
        return(ft_printf_number(va_arg(args, int)));
	else if (c == 'p')
    {
        ptr = (unsigned long long)va_arg(args, void *);
        if (write(1, "0x", 2) == -1)
            return (-1);
        return (2 + ft_print_pointer(ptr));
    }
    else if (c == 'x' || c == 'X')
        return(ft_print_hex (va_arg(args, unsigned int), c));
    else if (c == '%')
        return(ft_printf_char('%'));
    return(0);
}

int ft_printf(const char *format, ...)
{
   va_list args;
    int     i;
    int     count;
    int     result;

    i = 0;
    count = 0;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            result = ft_handle_format(format[i + 1], args);
            if (result == -1)
                return (va_end(args), -1);
            count += result;
            i += 2;
        }
        else
        {
            result = write(1, &format[i], 1);
            if (result == -1)
                return (va_end(args), -1);
            count += result;
            i++;
        }
    }
    va_end(args);
    return (count);
}
