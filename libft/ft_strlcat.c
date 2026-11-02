/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:17:05 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 10:56:49 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (dst_len == size)
		return (size + src_len);
	i = 0;
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*int	main(void)
{
	char	dst[20] = "42";
	size_t	result;

	result = ft_strlcat(dst, " Amman", sizeof(dst));
	printf("dst: %s\n", dst);
	printf("return: %zu\n", result);

	char	dst2[8] = "42";

	result = ft_strlcat(dst2, " Amman Libft", sizeof(dst2));
	printf("dst2: %s\n", dst2);
	printf("return: %zu\n", result);

	char	dst3[20] = "42";

	result = ft_strlcat(dst3, " Amman", 0);
	printf("dst3: %s\n", dst3);
	printf("return: %zu\n", result);

	char	buf[5] = {'A', 'A', 'A', 'A', 'A'};
	printf("%zu\n", ft_strlcat(buf, "xyz", 5));

	return (0);
}*/