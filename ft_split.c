/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:15:58 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/07 01:10:48 by samarkar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
				count++;
		}
		i++;
	}
	return (count);
}

int	is_charset(char c, char set)
{
	if (c == set)
		return (0);
	return (1);
}

char	*ft_dup(char const *s1, char set)
{
	int		i;
	int 	len;
	char	*copy;

	i = 0;
	while (s1[i] && s1[i] != set)
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (NULL);
	len = i;
	i = 0;
	while (i < len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void	ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	len = ft_count_words(s, c);
	if (!(tab = malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s != '\0' && !is_charset(*s, c))
			s++;
		if (!(tab[i] = ft_dup(s, c)))
		{
			ft_free_tab(tab);
			return (NULL);
		}
		while (*s != '\0' && is_charset(*s, c))
			s++;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
int main(void)
{
	char **tab = ft_split("salut les amis", ' ');
	int len = ft_count_words("salut les amis", ' ');
	int i = 0;
	
	while (i < len)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	ft_free_tab(tab);
}
