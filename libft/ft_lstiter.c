/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:36:14 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/08 11:43:29 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}


void	print_content(unsigned int i, char *c)
{
	print("%s\n", (char *)content);
}
}

int main (void)
{
	t_list  *a;
	t_list  *b;
	t_list  *c;


	a = ft_lstnew("first");
	b = ft_lstnew("second");
	c = ft_lstnew("third");

	a->next = b;
	b->next = c;

	ft_lstiter(a, print_content);

	free(a);
	free(b);
	free(c);

	return(0);
}
