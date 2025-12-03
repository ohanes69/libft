/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:11:03 by samarkar          #+#    #+#             */
/*   Updated: 2025/11/20 20:01:57 by samarkar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hays;
	char	*need;

	hays = (char *)big;
	need = (char *)little;
	i = 0;
	if (need[0] == '\0')
		return (hays);
	while (i < len && hays[i])
	{
		j = 0;
		while (hays[i + j] == need[j] && (i + j) < len)
		{
			if (need[j + 1] == '\0')
				return (hays + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
