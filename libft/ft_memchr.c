/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:43:48 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 10:54:18 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char	str[] = "42 Amman Libft";
	char	*result;

	result = ft_memchr(str, 'A', 14);
	printf("%s\n", result ? result : "NULL");

	result = ft_memchr(str, 'x', 14);
	printf("%s\n", result ? result : "NULL");

	result = ft_memchr(str, 'L', 5);
	printf("%s\n", result ? result : "NULL");

	return (0);
}*/
