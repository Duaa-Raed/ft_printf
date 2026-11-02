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

# include "ft_printf.h"

static int check_format(char c, va_list args)
{
    if(c == 'c')
        return(ft_printf_char(va_arg(args, int)));
    else if (c == 's')
        return(ft_printf_string(va_arg(args, char *)));
    else if (c == 'd' || c == 'i')
        return(ft_printf_number(va_arg(args, int)));
    else if (c == 'x' || c == 'X')
        return(ft_print_hex (va_arg(args, unsigned int, c));
    else if (c == '%')
        return(ft_printf_char('%'));
    return(0);
}

int ft_printf(const char *format)
{
    va_list args;

    
}
