/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:36:59 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/08 10:08:44 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*int	main(void)
{
	char	str[] = "42 Amman Libft";
	char	*result;

	result = ft_strchr(str, 'A');
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");

	result = ft_strchr(str, 'x');
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");

	result = ft_strchr(str, '\0');
	if (result)
		printf("Found null terminator\n");
	else
		printf("Not found\n");
	
	// print the addres 
	result = ft_strchr(str, 'A');
	if (result)
		printf("%c\n", *result);

	return (0);
}*/
