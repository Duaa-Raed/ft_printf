/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:43:05 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 10:51:21 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total_size;

	if (count != 0 && size > (size_t)-1 / count)
		return (NULL);
	total_size = count * size;
	p = malloc(total_size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, total_size);
	return (p);
}
/*int	main(void)
{
	 int *arr;
	char *str; 
	arr = ft_calloc(5, sizeof(int));
	 if (!arr)
	  return (1); 
	printf("%d %d %d %d %d\n",arr[0], arr[1], arr[2], arr[3], arr[4]); 

	free(arr); 
	str = ft_calloc(10, sizeof(char)); 
	if (!str) 
		return (1); 
	printf("[%s]\n", str); 
	free(str); 
	return (0);
}*/
