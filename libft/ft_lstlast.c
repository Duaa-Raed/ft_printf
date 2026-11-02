/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:43:29 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/08 09:50:06 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*int main (void)
{
	t_list  *a;
	t_list  *b;
	t_list  *c;
	t_list	*last;


	a = ft_lstnew("A");
	b = ft_lstnew("B");
	c = ft_lstnew("C");

	a->next = b;
	b->next = c;

	last = ft_lstlast(a);

	printf("last:%s\n",(char *)last->content);

	free(a);
	free(b);
	free(c);

	return(0);
}*/
