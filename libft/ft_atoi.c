/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:42:21 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 10:50:34 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * sign));
}
/*int	main(void)
{
	printf("%d\n", ft_atoi("42"));
	printf("%d\n", ft_atoi("-42"));
	printf("%d\n", ft_atoi("+42"));
	printf("%d\n", ft_atoi("   -123"));
	printf("%d\n", ft_atoi("42abc"));
	printf("%d\n", ft_atoi("abc42"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("     +42"));
	printf("%d\n", ft_atoi("--42"));
	printf("%d\n", ft_atoi("+-42"));
	printf("%d\n", ft_atoi("42 123"));

	return (0);
}*/
