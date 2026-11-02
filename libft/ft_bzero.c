/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:18:42 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 13:53:47 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*int	main()
{	
	char	str[10] = "abcdefhjf";
	size_t	i;

	ft_bzero(str, 3);

	i = 0;
	while(i < 3)
		{
			printf("%d", str[i]);
			i++;
		}
	printf("\n");
	return (0);
}*/
