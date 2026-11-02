/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:52:15 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/08 14:52:35 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst || !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		dst = ft_memcpy(dst, src, n);
	return (dst);
}
/*int main ()
{
        char str[30] = "hello world";

        printf("Befor memmove:%s\n", str);
        ft_memmove(str + 6,str,5);
        printf("After memmove:%s\n", str);
        return (0);
}*/
