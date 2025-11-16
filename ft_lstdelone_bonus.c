/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 21:13:24 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/15 22:19:42 by samarkar         ###   ########lyon.fr   */
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
#include <stdio.h>

void	delete_content(void *del)
{
	printf("Deleting content: %s\n", (char *)del);
	free(del);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del = (void *)lst;
	delete_content(del);
}

#include <string.h>
int main(void)
{
    /* On crée 3 contenus dynamiques (malloc) */
    char *s1 = malloc(6);
    char *s2 = malloc(4);
    char *s3 = malloc(5);

    /* On remplit */
    strcpy(s1, "salut");
    strcpy(s2, "les");
    strcpy(s3, "amis");

    /* On crée les 3 maillons */
    t_list *a = ft_lstnew(s1);
    t_list *b = ft_lstnew(s2);
    t_list *c = ft_lstnew(s3);

    /* On les chaîne : a -> b -> c */
    a->next = b;
    b->next = c;

    /* On supprime le maillon du milieu (b) */
    printf("Deleting node b...\n");
    ft_lstdelone(b, delete_content);

    /* On vérifie que la liste est toujours valide : a -> c */
    printf("a: %s\n", (char *)a->content);
    printf("a->next: %s\n", (char *)a->next->content);

    /* On free les maillons restants */
    ft_lstdelone(a, delete_content);
    ft_lstdelone(c, delete_content);

    return 0;
}