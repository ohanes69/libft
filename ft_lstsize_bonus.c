/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:11:35 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/13 12:42:42 by samarkar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Ce que fait exactement : lst = lst->next;

    1) lst->next
       - C'est le champ "next" du maillon actuel.
       - Ce champ contient *l'adresse du maillon suivant* dans la liste.
       - Donc "lst->next" = pointeur vers le prochain noeud.

    2) lst = lst->next;
       - On prend cette adresse (le prochain noeud)
         et on la place dans "lst".
       - Autrement dit : on remplace l'adresse actuelle de lst
         par l'adresse du noeud suivant.

    3) Résultat :
       - lst pointe maintenant sur le prochain noeud.
       - On a donc "avancé" d'un maillon dans la liste chaînée.
*/

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

int ft_lstsize(t_list *lst)
{
	int count = 0;

	if (!lst)
		return (0);
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
#include <stdio.h>
int main(void)
{
	t_list *noeud1 = ft_lstnew("Sasha");
	t_list *noeud2 = ft_lstnew("Harout");
	t_list *noeud3 = ft_lstnew("Andranik");

	noeud1->next = noeud2;
	noeud2->next = noeud3;
	noeud3->next = NULL;

	t_list *lst = noeud1;

	int size = ft_lstsize(lst);

	printf("%d\n", size);
}