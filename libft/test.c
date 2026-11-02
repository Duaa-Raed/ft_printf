/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 09:57:31 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/25 10:35:10 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return((char *)haystak);
	while (i < len && haystak[i] != '\0')
	{
		j = 0;
		while (needle[i] != '\0' && i + j < len && haystak[i+j] == needle[j])
			j++;
		if (needle[i] == '\0')
			return((char *)haystak[i]);
		i++;
	}
	return (NULL);
}	
