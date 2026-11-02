/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:43:26 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/05 08:32:52 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_char;

	last_char = NULL;
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			last_char = ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (last_char);
}
/*int	main(void)
{
	char	*result;

	result = ft_strrchr("banana", 'a');
	printf("%s\n", result);

	result = ft_strrchr("Hello World", 'o');
	printf("%s\n", result);

	result = ft_strrchr("42 Amman", 'z');
	printf("%s\n", result ? result : "NULL");
	return (0);
}*/
