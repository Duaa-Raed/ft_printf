/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 08:21:21 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/05 08:21:49 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill(char *str, int n, int len)
{
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_fill(str, n, len);
	return (str);
}
/*int	main(void)
{
	char	*str;

	str = ft_itoa(42);
	printf("42: %s\n", str);
	free(str);

	str = ft_itoa(-42);
	printf("-42: %s\n", str);
	free(str);

	str = ft_itoa(0);
	printf("0: %s\n", str);
	free(str);

	str = ft_itoa(123456);
	printf("123456: %s\n", str);
	free(str);

	str = ft_itoa(-123456);
	printf("-123456: %s\n", str);
	free(str);

	str = ft_itoa(-2147483648);
	printf("INT_MIN: %s\n", str);
	free(str);

	str = ft_itoa(2147483647);
	printf("INT_MAX: %s\n", str);
	free(str);

	return (0);
}*/
