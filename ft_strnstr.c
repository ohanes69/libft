/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samarkar <samarkar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:42:39 by samarkar          #+#    #+#             */
/*   Updated: 2025/10/25 17:07:54 by samarkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hays;
	char	*need;

	hays = (char *)haystack;
	need = (char *)needle;
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
