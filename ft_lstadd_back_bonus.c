/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:47:16 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/15 20:59:01 by samarkar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);

	new->content = content;
	new->next = NULL;

	return (new);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	if (!new)
		return;
	if (!*lst)
	{
		*lst = new;
		return;
	}
	temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}

#include <stdio.h>
int main(void)
{
	t_list *a = ft_lstnew("AB");
	t_list *b = ft_lstnew("CD");

	a->next = b;
	b->next = NULL;

	t_list *new = ft_lstnew("EF");

	ft_lstadd_back(&a, new);

	printf("%s", (char *)a->next->next->content);
}