/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 20:20:28 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/15 21:06:42 by samarkar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));

	if (!new)
		return (NULL);

	new->content = content;
	new->next = NULL;

	return (new);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);

	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

#include <stdio.h>
int main(void)
{
	t_list *a = ft_lstnew("h");
	t_list *b = ft_lstnew("e");
	t_list *c = ft_lstnew("y");

	a->next = b;
	b->next = c;
	c->next = NULL;
	t_list *last;

	last = ft_lstlast(a);

	printf("%s", (char *)last->content);

	return (0);
}