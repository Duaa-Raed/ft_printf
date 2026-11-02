/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:45:59 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 10:55:17 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char	str[20] = "Hello World";

	ft_memset(str, 'X', 5);
	printf("%s\n", str);

	ft_memset(str, '-', 0);
	printf("%s\n", str);

	ft_memset(str, 'A', 1);
	printf("%s\n", str);

	return (0);
}*/
