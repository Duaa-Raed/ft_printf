/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:46:39 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/05 08:32:01 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*int main()
{
	char x[10]= "hi";
	char y[10]= " my world ";
	printf("%zu\n",ft_strlcpy(x, y,5));
}*/
/*
int	main(void)
{
char x[20];
char y[20];
size_t z;



z = ft_strlcpy(x, "Hello",  sizeof(x));
printf("Test 1: dest = [%s], return = %zu\n", x, z);


z = ft_strlcpy(x, "Hello World", 5);
printf("Test 2: dest = [%s], return = %zu\n", x, z);


x[0] = 'X';
z = ft_strlcpy(x, "Hello", 0);
printf("Test 3: dest = [%s], return = %zu\n", x, z);


z = ft_strlcpy(x, "", sizeof(x));
printf("Test 4: dest = [%s], return = %zu\n", x, z);


z = ft_strlcpy(y, "Hello", 1);
printf("Test 5: dest = [%s], return = %zu\n", y, z);


z = ft_strlcpy(y, "Hey", 4);
printf("Test 6: dest = [%s], return = %zu\n", y, z);

return (0);
}*/
