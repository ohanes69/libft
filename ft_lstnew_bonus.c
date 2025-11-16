/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:47:03 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/15 20:30:55 by samarkar         ###   ########lyon.fr   */
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

#include <stdio.h>

int main(void)
{
	t_list *new = ft_lstnew("hello");

	printf("%s\n", (char *)new->content);
}

// int main(void)
// {
// 	int a = 122;

// 	t_list *new = ft_lstnew(&a);

// 	int *p = new->content;

// 	printf("%d\n", *p);
// }