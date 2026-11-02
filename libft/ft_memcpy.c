/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:45:23 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 10:55:00 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (unsigned char *)dst;
	p2 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (dst);
}
/*int	main(void)
{
	char	src[] = "42 Amman";
	char	dst[20];

	ft_memcpy(dst, src, 9);
	printf("%s\n", dst);

	ft_memcpy(dst, "LIBFT", 6);
	printf("%s\n", dst);

	ft_memcpy(dst, src, 0);
	printf("%s\n", dst);

	return (0);
}*/
