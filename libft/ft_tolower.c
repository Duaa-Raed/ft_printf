/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:35:19 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 13:50:46 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int x)
{
	if (x >= 'A' && x <= 'Z')
	{
		return (x + 32);
	}
	return (x);
}
/*int	main(void)
{
	printf("tolower A: %c\n", ft_tolower('A'));
	printf("tolower Z: %c\n", ft_tolower('Z'));
	printf("tolower a: %c\n", ft_tolower('a'));

	return (0);
}*/
