/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:47:06 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 10:56:27 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	string = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!string)
		return (NULL);
	ft_strlcpy(string, s1, len1 + 1);
	ft_strlcpy(string + len1, s2, len2 + 1);
	return (string);
}
/*int	main(void)
{
	char	*result;

	result = ft_strjoin("Hello ", "World");

	if (!result)
		return (1);

	printf("Result: %s\n", result);

	free(result);
	return (0);
}*/
