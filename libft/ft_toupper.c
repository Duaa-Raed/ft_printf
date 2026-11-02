/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:32:57 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 13:50:27 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (x - 32);
	}
	return (x);
}
/*int	main(void)
{

	printf("toupper a: %c\n", ft_toupper('a'));
	printf("toupper z: %c\n", ft_toupper('z'));
	printf("toupper Z: %c\n", ft_toupper('Z'));

	return (0);
}*/
