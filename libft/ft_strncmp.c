/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 08:29:08 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/05 08:31:16 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0'
		&& (unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*int main(void)
	{
		printf("%d\n", ft_strncmp("abc", "abc", 3));
		printf("%d\n", ft_strncmp("abc", "abd", 3));
			printf("%d\n", ft_strncmp("abd", "abc", 3));
		printf("%d\n", ft_strncmp("abc", "abcd", 4));
		printf("%d\n",
		ft_strncmp("abc", "abd", 2)); printf("%d\n",
		ft_strncmp("abc", "xyz", 0));
		return (0);
		}
*/
