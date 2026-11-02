/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:07:10 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/08 09:25:03 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main (void)
{
	t_list  *lst;
	t_list  *new;

	lst = ft_lstnew("second");
	new = ft_lstnew("first");

	ft_lstadd_front(&lst, new);

	printf("first:%s\n",(char *)lst->content);
	printf("next:%s\n",(char *)lst->next->content);

	free(new);
	free(lst);
	return(0);
}*/
