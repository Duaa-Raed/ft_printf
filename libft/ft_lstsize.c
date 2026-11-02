/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:32:20 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/08 09:31:49 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*int main (void)
{
	t_list  *a;
	t_list  *b;
	t_list  *c;


	a = ft_lstnew("a");
	b = ft_lstnew("b");
	c = ft_lstnew("c");

	a->next = b;
	b->next = c;

	printf("size:%u\n",ft_lstsize(a));

	free(a);
	free(b);
	free(c);
	return(0);
}*/
