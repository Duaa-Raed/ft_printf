/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 12:44:09 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/08 10:07:44 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
/*
void	my_del(void *content)
{
	printf("deledting:%s\n", (char *)content);
}

int main (void)
{
	t_list *node ;
	
	node = ft_lstnew("Hello");

	printf("Befor delete: %s\n", (char *)node->content);
	
	ft_lstdelone(node, my_del);

	printf("node deleted");

	return(0);
}*/
