/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:52:43 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/13 13:06:15 by samarkar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*

Variable : new ; Ce que c’est ? pointeur vers un maillon ; Pourquoi on la passe ? on veut l’ajouter ; On envoie : new

Variable : a ; Ce que c’est ? pointeur vers le premier maillon ; Pourquoi on la passe ? on veut le modifier ; On envoie : &a

✔️ Si tu veux que la fonction MODIFIE une variable :

➡️ Tu envoies l’adresse de cette variable
➡️ Donc tu envoies &quelque_chose

✔️ Si tu veux juste DONNER une valeur (sans qu’elle change) :

➡️ Tu envoies la valeur directement
➡️ Donc tu envoies simplement quelque_chose

*/

/***********************************************
** EXEMPLE 1 : Modifier une chaîne (char *)
** On change vers quelle chaîne pointe une variable.
************************************************/

/*

void change_string(char **str)
{
    *str = "World";  // On change l'adresse contenue dans 's'
}

int main(void)
{
    char *s = "Hello";
    change_string(&s);    // On passe l'adresse de s

    printf("%s\n", s);    // World
    return 0;
}
*/

/***********************************************
** EXEMPLE 2 : Modifier un entier (int)
** On change la vraie valeur de l'entier.
************************************************/

/*

void change_int(int *n)
{
    *n = 999;   // On change la valeur réelle de x
}

int main(void)
{
    int x = 42;
    change_int(&x);       // On passe l'adresse de x

    printf("%d\n", x);    // 999
    return 0;
}
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

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return;
	new->next = *lst;
	*lst = new;
}

int main(void)
{
	t_list *a = ft_lstnew("A");
	t_list *b = ft_lstnew("B");
	t_list *c = ft_lstnew("C");

	a->next = b;
	b->next = c;

	t_list *new = ft_lstnew("N");

	printf("%s\n", (char *) a->content);

	ft_lstadd_front(&a, new);

	printf("%s\n", (char *)a->content);
	printf("%s\n", (char *)a->next->content);
}