/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:47:37 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/05 08:33:30 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && i + j < len
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char	*result;

	result = ft_strnstr("42 Amman Libft", "Amman", 14);
	printf("%s\n", result ? result : "NULL");

	result = ft_strnstr("42 Amman Libft", "Libft", 8);
	printf("%s\n", result ? result : "NULL");

	result = ft_strnstr("42 Amman Libft", "", 5);
	printf("%s\n", result ? result : "NULL");

	return (0);
}*/