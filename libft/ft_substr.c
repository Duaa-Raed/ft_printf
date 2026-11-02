/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:48:05 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 11:00:12 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(char const *s, unsigned int start, size_t len)
{
	size_t	slen;

	slen = ft_strlen(s);
	if (start >= slen)
		return (0);
	if (len > slen - start)
		return (slen - start);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	clen;
	char	*result;

	if (!s)
		return (NULL);
	clen = get_len(s, start, len);
	result = malloc(clen + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < clen)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*int	main(void)
{
	char	*result;

	result = ft_substr("Hello World", 6, 5);

	if (!result)
		return (1);

	printf("Result: %s\n", result);

	free(result);
	return (0);
}*/