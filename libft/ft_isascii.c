/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:12:58 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 10:52:42 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*int	main()
{	
	printf("%d",ft_isascii(-1));
	printf("%d",ft_isascii(' '));
	printf("%d",ft_isascii('4'));
	printf("%d",ft_isascii('f'));
}*/
