/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 08:12:36 by dalinein          #+#    #+#             */
/*   Updated: 2026/11/02 08:12:39 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);
int ft_printf_char(char c);
int ft_printf_string(char *str);
int ft_printf_number(int n);
int ft_print_hex(unsigned int n, char format);
int ft_print_pointer(unsigned long long ptr);
int ft_printf_unsigned(unsigned int n);

#endif