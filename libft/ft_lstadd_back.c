/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 12:21:54 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/08 10:15:13 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("first");
	new = ft_lstnew("last");
	ft_lstadd_back(&lst, new);
	printf("first:%s\n", (char *)lst->content);
	printf("last:%s\n", (char *)lst->next->content);
	free(new);
	free(lst);
	return (0);
}*/
