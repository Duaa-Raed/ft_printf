/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:46:34 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 10:56:04 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*int	main(void)
{
	char	*dup;

	dup = ft_strdup("42 Amman - Libft");
	if (!dup)
		return (1);

	printf("%s\n", dup);

	free(dup);

	dup = ft_strdup("");
	if (!dup)
		return (1);

	printf("[%s]\n", dup);

	free(dup);
	return (0);
}*/
