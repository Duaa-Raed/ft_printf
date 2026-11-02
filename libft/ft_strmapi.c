/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 08:28:16 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/05 08:28:34 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f((unsigned int)i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}
void	turn_to_star(unsigned int i, char c)
{
	(void)i;
	(void)c;
	return('*');
}

int	main(void)
{
	char	*str = "hello";
	char	*result;

	result = ft_strmapi(str, replace_first);

	if (!result)
	{
		printf("Error: Malloc failed!\n");
		return (1);
	}

	printf("Original : %s\n", str);
	printf("Result   : %s\n", result);


	free(result);
	return (0);
}*/
