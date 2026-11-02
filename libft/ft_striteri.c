/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 08:26:39 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/05 08:26:51 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
void	turn_to_star(unsigned int i, char *s)
{
	(void)i;
	if(s)
		*s = '*';
}

int	main(void)
{
	char	str[] = "hello world";

	printf("Before: %s\n", str);
	ft_striteri(str, upper_char);
	printf("After:  %s\n", str);

	return (0);
}
