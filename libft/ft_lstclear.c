/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 10:50:36 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/08 11:30:58 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !*lst)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}

void	my_del(void *content)
{
	free(content);
}

int main (void)
{
	t_list  *a;
	t_list  *b;
	t_list  *c;
	t_list	*lst;


	a = ft_lstnew("first");
	b = ft_lstnew("second");
	c = ft_lstnew("third");

	a->next = b;
	b->next = c;

	lst =(a);

	ft_lstclear(&lst, my_del);
	printf("after:\n");
	if (lst == NULL)
		printf("LIST IS CLEAN ");

	return(0);
}
